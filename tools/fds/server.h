// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FASTDDS_SERVER_SERVER_H_
#define FASTDDS_SERVER_SERVER_H_

// Parsing setup
#include <optionparser.hpp>
#include <string>

namespace option = eprosima::option;

enum  optionIndex
{
    UNKNOWN,
    HELP,
    VERSION,
    SERVERID,
    UDPADDRESS,
    UDP_PORT,
    TCPADDRESS,
    TCP_PORT,
    BACKUP,
    XML_FILE
};

struct Arg : public option::Arg
{
    static option::ArgStatus check_server_id(
            const option::Option& option,
            bool msg);

    static option::ArgStatus required(
            const option::Option& option,
            bool msg);

    static option::ArgStatus check_udp_port(
            const option::Option& option,
            bool msg);

    static option::ArgStatus check_tcp_port(
            const option::Option& option,
            bool msg);
};

const option::Descriptor usage[] = {

    { UNKNOWN,   0, "",   "",             Arg::None,
      "\neProsima Server-Client discovery auxiliary generator tool version " FAST_SERVER_VERSION "\n"
      "\nUsage: " FAST_SERVER_BINARY " [optional parameters] \nGeneral options:" },

    { HELP,      0, "h",  "help",         Arg::None,
      "  -h  \t--help        Produce help message.\n" },

    { VERSION,   0, "v",  "version",      Arg::None,
      "  -v  \t--version     Show Fast DDS version information.\n" },

    { UDPADDRESS, 0, "l", "udp-address",   Arg::OptionalAny,
      "  -l \t--udp-address IPv4/IPv6 address chosen to listen the clients. Defaults\n"
      "\t              to any (0.0.0.0/::0). Instead of an address, a name can\n"
      "\t              be specified.\n"},

    { UDP_PORT,  0, "p",  "udp-port",       Arg::check_udp_port,
      "  -p  \t--udp-port    UDP port chosen to listen the clients. Defaults to 11811.\n" },

    { TCPADDRESS, 0, "t", "tcp-address",   Arg::OptionalAny,
      "  -t \t--tcp-address IPv4/IPv6 address chosen to listen the clients using\n"
      "\t              TCP transport. Defaults to any (0.0.0.0/::0). Instead of an \n"
      "\t              address, a name can be specified.\n"},

    { TCP_PORT,  0, "q",  "tcp-port",         Arg::check_tcp_port,
      "  -q  \t--tcp-port    TCP port chosen to listen the clients. Defaults to 42100.\n" },

    { BACKUP,    0, "b",  "backup",       Arg::None,
      "  -b  \t--backup      Creates a server with a backup file associated.\n" },

    { XML_FILE,  0, "x",  "xml-file",     Arg::required,
      "  -x  \t--xml-file    Gets config from XML file. If there is any argument in \n"
      "\t              common with the config of the XML, the XML argument will \n"
      "\t              be overriden. A XML file with several profiles will take\n"
      "\t              the profile with \"is_default_profile=\"true\"\" unless \n"
      "\t              another profile using uri with \"@\" character is defined.\n"},

    { SERVERID,  0, "i", "server-id",    Arg::check_server_id,
      "  -i \t--server-id   Unique server identifier. Its functionality its\n"
      "\t              deprecated. It can be used to select a fixed GUID.\n" },

    { 0, 0, 0, 0, 0, 0 }
};

const std::string EXAMPLES =

        "Examples:\n"

        "\t1.  Launch a default server listening on all available interfaces on\n"
        "\t    UDP port 11811. Only one server can use default values per machine.\n\n"
        "\t    $ " FAST_SERVER_BINARY "\n\n"

        "\t2.  Launch a default server listening on localhost on UDP port 14520.\n"
        "\t    Only localhost clients can reach the server, for example using\n"
        "\t    ROS_DISCOVERY_SERVER=127.0.0.1:14520\n\n"
        "\t    $ " FAST_SERVER_BINARY " -l 127.0.0.1 -p 14520\n\n"

        "\t3.  Launch a default server listening on all available interfaces on\n"
        "\t    TCP port 42100. Only one server can use default values per machine.\n\n"
        "\t    $ " FAST_SERVER_BINARY " -t\n\n"

        "\t4.  Launch a default server with GUID corresponding to id 1 (deprecated\n"
        "\t    parameter) listening on IPv6 address on UDP port 14520.\n\n"
        "\t    $ " FAST_SERVER_BINARY " -i 1 -l 2a02:ec80:600:ed1a::3 -p 14520\n\n"

        "\t5.  Launch a default server listening on WiFi (192.168.36.34) and Ethernet\n"
        "\t    (172.20.96.1) local interfaces on UDP ports 8783 and 51083 \n"
        "\t    respectively (addresses and ports are made up for the example).\n\n"
        "\t    $ " FAST_SERVER_BINARY " -l 192.163.6.34 -p 8783 -l 172.20.96.1\n"
        "\t    -p 51083\n\n"

        "\t6.  Launch a default server listening on 172.31.44.1 on UDP port 12345\n"
        "\t    and provided with a backup file. If the server crashes it will\n"
        "\t    automatically restore its previous state when reenacted.\n\n"
        "\t    $ " FAST_SERVER_BINARY " -l 172.31.44.1 -p 12345 -b\n\n"

        "\t7.  Launch a server reading default configuration from XML file.\n\n"
        "\t    $ " FAST_SERVER_BINARY " -x config.xml\n\n"

        "\t8.  Launch a server reading a profile_name configuration from XML file.\n\n"
        "\t    $ " FAST_SERVER_BINARY " -x profile_name@config.xml\n\n"

        "\t9.  Launch a server listening on localhost with default TCP port 42100\n\n"
        "\t    $ " FAST_SERVER_BINARY " -t 127.0.0.1\n\n"

        "\t10. Launch a server listening on localhost and Wi-Fi (192.163.6.34).\n"
        "\t    Two TCP ports need to be specified because TCP Transports cannot\n"
        "\t    share ports.\n\n"
        "\t    $ " FAST_SERVER_BINARY " -t 127.0.0.1 -q 42100 -t 192.163.6.34 \n"
        "\t    -q 42101";

#endif // FASTDDS_SERVER_SERVER_H_
