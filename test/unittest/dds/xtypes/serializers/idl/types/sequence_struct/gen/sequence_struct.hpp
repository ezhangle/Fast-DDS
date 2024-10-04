// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file sequence_struct.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__SEQUENCE_STRUCT_HPP
#define FAST_DDS_GENERATED__SEQUENCE_STRUCT_HPP

#include <cstdint>
#include <string>
#include <utility>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(SEQUENCE_STRUCT_SOURCE)
#define SEQUENCE_STRUCT_DllAPI __declspec( dllexport )
#else
#define SEQUENCE_STRUCT_DllAPI __declspec( dllimport )
#endif // SEQUENCE_STRUCT_SOURCE
#else
#define SEQUENCE_STRUCT_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define SEQUENCE_STRUCT_DllAPI
#endif // _WIN32

/*!
 * @brief This class represents the structure NestedSequenceElement defined by the user in the IDL file.
 * @ingroup sequence_struct
 */
class NestedSequenceElement
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NestedSequenceElement()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NestedSequenceElement()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NestedSequenceElement that will be copied.
     */
    eProsima_user_DllExport NestedSequenceElement(
            const NestedSequenceElement& x)
    {
                    m_my_string = x.m_my_string;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NestedSequenceElement that will be copied.
     */
    eProsima_user_DllExport NestedSequenceElement(
            NestedSequenceElement&& x) noexcept
    {
        m_my_string = std::move(x.m_my_string);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NestedSequenceElement that will be copied.
     */
    eProsima_user_DllExport NestedSequenceElement& operator =(
            const NestedSequenceElement& x)
    {

                    m_my_string = x.m_my_string;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NestedSequenceElement that will be copied.
     */
    eProsima_user_DllExport NestedSequenceElement& operator =(
            NestedSequenceElement&& x) noexcept
    {

        m_my_string = std::move(x.m_my_string);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x NestedSequenceElement object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const NestedSequenceElement& x) const
    {
        return (m_my_string == x.m_my_string);
    }

    /*!
     * @brief Comparison operator.
     * @param x NestedSequenceElement object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const NestedSequenceElement& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function copies the value in member my_string
     * @param _my_string New value to be copied in member my_string
     */
    eProsima_user_DllExport void my_string(
            const std::string& _my_string)
    {
        m_my_string = _my_string;
    }

    /*!
     * @brief This function moves the value in member my_string
     * @param _my_string New value to be moved in member my_string
     */
    eProsima_user_DllExport void my_string(
            std::string&& _my_string)
    {
        m_my_string = std::move(_my_string);
    }

    /*!
     * @brief This function returns a constant reference to member my_string
     * @return Constant reference to member my_string
     */
    eProsima_user_DllExport const std::string& my_string() const
    {
        return m_my_string;
    }

    /*!
     * @brief This function returns a reference to member my_string
     * @return Reference to member my_string
     */
    eProsima_user_DllExport std::string& my_string()
    {
        return m_my_string;
    }



private:

    std::string m_my_string;

};
/*!
 * @brief This class represents the structure ComplexSequenceElement defined by the user in the IDL file.
 * @ingroup sequence_struct
 */
class ComplexSequenceElement
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ComplexSequenceElement()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ComplexSequenceElement()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ComplexSequenceElement that will be copied.
     */
    eProsima_user_DllExport ComplexSequenceElement(
            const ComplexSequenceElement& x)
    {
                    m_my_short = x.m_my_short;

                    m_my_long = x.m_my_long;

                    m_my_complex_element = x.m_my_complex_element;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ComplexSequenceElement that will be copied.
     */
    eProsima_user_DllExport ComplexSequenceElement(
            ComplexSequenceElement&& x) noexcept
    {
        m_my_short = x.m_my_short;
        m_my_long = x.m_my_long;
        m_my_complex_element = std::move(x.m_my_complex_element);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ComplexSequenceElement that will be copied.
     */
    eProsima_user_DllExport ComplexSequenceElement& operator =(
            const ComplexSequenceElement& x)
    {

                    m_my_short = x.m_my_short;

                    m_my_long = x.m_my_long;

                    m_my_complex_element = x.m_my_complex_element;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ComplexSequenceElement that will be copied.
     */
    eProsima_user_DllExport ComplexSequenceElement& operator =(
            ComplexSequenceElement&& x) noexcept
    {

        m_my_short = x.m_my_short;
        m_my_long = x.m_my_long;
        m_my_complex_element = std::move(x.m_my_complex_element);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x ComplexSequenceElement object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ComplexSequenceElement& x) const
    {
        return (m_my_short == x.m_my_short &&
           m_my_long == x.m_my_long &&
           m_my_complex_element == x.m_my_complex_element);
    }

    /*!
     * @brief Comparison operator.
     * @param x ComplexSequenceElement object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ComplexSequenceElement& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function sets a value in member my_short
     * @param _my_short New value for member my_short
     */
    eProsima_user_DllExport void my_short(
            int16_t _my_short)
    {
        m_my_short = _my_short;
    }

    /*!
     * @brief This function returns the value of member my_short
     * @return Value of member my_short
     */
    eProsima_user_DllExport int16_t my_short() const
    {
        return m_my_short;
    }

    /*!
     * @brief This function returns a reference to member my_short
     * @return Reference to member my_short
     */
    eProsima_user_DllExport int16_t& my_short()
    {
        return m_my_short;
    }


    /*!
     * @brief This function sets a value in member my_long
     * @param _my_long New value for member my_long
     */
    eProsima_user_DllExport void my_long(
            int32_t _my_long)
    {
        m_my_long = _my_long;
    }

    /*!
     * @brief This function returns the value of member my_long
     * @return Value of member my_long
     */
    eProsima_user_DllExport int32_t my_long() const
    {
        return m_my_long;
    }

    /*!
     * @brief This function returns a reference to member my_long
     * @return Reference to member my_long
     */
    eProsima_user_DllExport int32_t& my_long()
    {
        return m_my_long;
    }


    /*!
     * @brief This function copies the value in member my_complex_element
     * @param _my_complex_element New value to be copied in member my_complex_element
     */
    eProsima_user_DllExport void my_complex_element(
            const NestedSequenceElement& _my_complex_element)
    {
        m_my_complex_element = _my_complex_element;
    }

    /*!
     * @brief This function moves the value in member my_complex_element
     * @param _my_complex_element New value to be moved in member my_complex_element
     */
    eProsima_user_DllExport void my_complex_element(
            NestedSequenceElement&& _my_complex_element)
    {
        m_my_complex_element = std::move(_my_complex_element);
    }

    /*!
     * @brief This function returns a constant reference to member my_complex_element
     * @return Constant reference to member my_complex_element
     */
    eProsima_user_DllExport const NestedSequenceElement& my_complex_element() const
    {
        return m_my_complex_element;
    }

    /*!
     * @brief This function returns a reference to member my_complex_element
     * @return Reference to member my_complex_element
     */
    eProsima_user_DllExport NestedSequenceElement& my_complex_element()
    {
        return m_my_complex_element;
    }



private:

    int16_t m_my_short{0};
    int32_t m_my_long{0};
    NestedSequenceElement m_my_complex_element;

};
/*!
 * @brief This class represents the structure SequenceStruct defined by the user in the IDL file.
 * @ingroup sequence_struct
 */
class SequenceStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceStruct()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceStruct()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct(
            const SequenceStruct& x)
    {
                    m_my_basic_sequence = x.m_my_basic_sequence;

                    m_my_bounded_sequence = x.m_my_bounded_sequence;

                    m_my_complex_sequence = x.m_my_complex_sequence;

                    m_my_complex_bounded_sequence = x.m_my_complex_bounded_sequence;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct(
            SequenceStruct&& x) noexcept
    {
        m_my_basic_sequence = std::move(x.m_my_basic_sequence);
        m_my_bounded_sequence = std::move(x.m_my_bounded_sequence);
        m_my_complex_sequence = std::move(x.m_my_complex_sequence);
        m_my_complex_bounded_sequence = std::move(x.m_my_complex_bounded_sequence);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct& operator =(
            const SequenceStruct& x)
    {

                    m_my_basic_sequence = x.m_my_basic_sequence;

                    m_my_bounded_sequence = x.m_my_bounded_sequence;

                    m_my_complex_sequence = x.m_my_complex_sequence;

                    m_my_complex_bounded_sequence = x.m_my_complex_bounded_sequence;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct& operator =(
            SequenceStruct&& x) noexcept
    {

        m_my_basic_sequence = std::move(x.m_my_basic_sequence);
        m_my_bounded_sequence = std::move(x.m_my_bounded_sequence);
        m_my_complex_sequence = std::move(x.m_my_complex_sequence);
        m_my_complex_bounded_sequence = std::move(x.m_my_complex_bounded_sequence);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x SequenceStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceStruct& x) const
    {
        return (m_my_basic_sequence == x.m_my_basic_sequence &&
           m_my_bounded_sequence == x.m_my_bounded_sequence &&
           m_my_complex_sequence == x.m_my_complex_sequence &&
           m_my_complex_bounded_sequence == x.m_my_complex_bounded_sequence);
    }

    /*!
     * @brief Comparison operator.
     * @param x SequenceStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceStruct& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function copies the value in member my_basic_sequence
     * @param _my_basic_sequence New value to be copied in member my_basic_sequence
     */
    eProsima_user_DllExport void my_basic_sequence(
            const std::vector<char>& _my_basic_sequence)
    {
        m_my_basic_sequence = _my_basic_sequence;
    }

    /*!
     * @brief This function moves the value in member my_basic_sequence
     * @param _my_basic_sequence New value to be moved in member my_basic_sequence
     */
    eProsima_user_DllExport void my_basic_sequence(
            std::vector<char>&& _my_basic_sequence)
    {
        m_my_basic_sequence = std::move(_my_basic_sequence);
    }

    /*!
     * @brief This function returns a constant reference to member my_basic_sequence
     * @return Constant reference to member my_basic_sequence
     */
    eProsima_user_DllExport const std::vector<char>& my_basic_sequence() const
    {
        return m_my_basic_sequence;
    }

    /*!
     * @brief This function returns a reference to member my_basic_sequence
     * @return Reference to member my_basic_sequence
     */
    eProsima_user_DllExport std::vector<char>& my_basic_sequence()
    {
        return m_my_basic_sequence;
    }


    /*!
     * @brief This function copies the value in member my_bounded_sequence
     * @param _my_bounded_sequence New value to be copied in member my_bounded_sequence
     */
    eProsima_user_DllExport void my_bounded_sequence(
            const std::vector<float>& _my_bounded_sequence)
    {
        m_my_bounded_sequence = _my_bounded_sequence;
    }

    /*!
     * @brief This function moves the value in member my_bounded_sequence
     * @param _my_bounded_sequence New value to be moved in member my_bounded_sequence
     */
    eProsima_user_DllExport void my_bounded_sequence(
            std::vector<float>&& _my_bounded_sequence)
    {
        m_my_bounded_sequence = std::move(_my_bounded_sequence);
    }

    /*!
     * @brief This function returns a constant reference to member my_bounded_sequence
     * @return Constant reference to member my_bounded_sequence
     */
    eProsima_user_DllExport const std::vector<float>& my_bounded_sequence() const
    {
        return m_my_bounded_sequence;
    }

    /*!
     * @brief This function returns a reference to member my_bounded_sequence
     * @return Reference to member my_bounded_sequence
     */
    eProsima_user_DllExport std::vector<float>& my_bounded_sequence()
    {
        return m_my_bounded_sequence;
    }


    /*!
     * @brief This function copies the value in member my_complex_sequence
     * @param _my_complex_sequence New value to be copied in member my_complex_sequence
     */
    eProsima_user_DllExport void my_complex_sequence(
            const std::vector<ComplexSequenceElement>& _my_complex_sequence)
    {
        m_my_complex_sequence = _my_complex_sequence;
    }

    /*!
     * @brief This function moves the value in member my_complex_sequence
     * @param _my_complex_sequence New value to be moved in member my_complex_sequence
     */
    eProsima_user_DllExport void my_complex_sequence(
            std::vector<ComplexSequenceElement>&& _my_complex_sequence)
    {
        m_my_complex_sequence = std::move(_my_complex_sequence);
    }

    /*!
     * @brief This function returns a constant reference to member my_complex_sequence
     * @return Constant reference to member my_complex_sequence
     */
    eProsima_user_DllExport const std::vector<ComplexSequenceElement>& my_complex_sequence() const
    {
        return m_my_complex_sequence;
    }

    /*!
     * @brief This function returns a reference to member my_complex_sequence
     * @return Reference to member my_complex_sequence
     */
    eProsima_user_DllExport std::vector<ComplexSequenceElement>& my_complex_sequence()
    {
        return m_my_complex_sequence;
    }


    /*!
     * @brief This function copies the value in member my_complex_bounded_sequence
     * @param _my_complex_bounded_sequence New value to be copied in member my_complex_bounded_sequence
     */
    eProsima_user_DllExport void my_complex_bounded_sequence(
            const std::vector<ComplexSequenceElement>& _my_complex_bounded_sequence)
    {
        m_my_complex_bounded_sequence = _my_complex_bounded_sequence;
    }

    /*!
     * @brief This function moves the value in member my_complex_bounded_sequence
     * @param _my_complex_bounded_sequence New value to be moved in member my_complex_bounded_sequence
     */
    eProsima_user_DllExport void my_complex_bounded_sequence(
            std::vector<ComplexSequenceElement>&& _my_complex_bounded_sequence)
    {
        m_my_complex_bounded_sequence = std::move(_my_complex_bounded_sequence);
    }

    /*!
     * @brief This function returns a constant reference to member my_complex_bounded_sequence
     * @return Constant reference to member my_complex_bounded_sequence
     */
    eProsima_user_DllExport const std::vector<ComplexSequenceElement>& my_complex_bounded_sequence() const
    {
        return m_my_complex_bounded_sequence;
    }

    /*!
     * @brief This function returns a reference to member my_complex_bounded_sequence
     * @return Reference to member my_complex_bounded_sequence
     */
    eProsima_user_DllExport std::vector<ComplexSequenceElement>& my_complex_bounded_sequence()
    {
        return m_my_complex_bounded_sequence;
    }



private:

    std::vector<char> m_my_basic_sequence;
    std::vector<float> m_my_bounded_sequence;
    std::vector<ComplexSequenceElement> m_my_complex_sequence;
    std::vector<ComplexSequenceElement> m_my_complex_bounded_sequence;

};

#endif // _FAST_DDS_GENERATED_SEQUENCE_STRUCT_HPP_

