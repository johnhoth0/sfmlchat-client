/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef TGUI_TEXT_STYLE_HPP
#define TGUI_TEXT_STYLE_HPP

#include <TGUI/Config.hpp>
#include <SFML/Graphics/Text.hpp>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// @brief Wrapper for text styles
    ///
    /// The class is used for 2 purposes:
    /// - Implicit converter for parameters. A function taking a TextStyle as parameter can be given either an sf::Text::Style
    ///   or a string representation as argument.
    /// - Storing no style at all. Some style settings may be optionally set and can thus remain unspecified.
    ///
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class TGUI_API TextStyle
    {
    public:

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates the object without a text style
        ///
        /// The isSet function will return false when the object was created using this constructor.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates the object from one or more sf::Text::Style enum members
        ///
        /// @param style  Text style to set
        ///
        /// @code
        /// TextStyle style{sf::Text::Italic | sf::Text::Bold};
        /// @endcode
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle(unsigned int style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates the object from a string representing the text styles
        ///
        /// @param string  String to be deserialized as text styles
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle(const std::string& string);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates the object from a string representing the text styles
        ///
        /// @param string  String to be deserialized as text styles
        ///
        /// @code
        /// TextStyle style{"Italic | Bold"};
        /// @endcode
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyle(const char* string);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Checks if a style was set
        ///
        /// @return True if a text style was passed to the constructor, false when the default constructor was used
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool isSet() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Converts this object into an unsigned int
        ///
        /// @return The text styles stored in this object, or sf::Text::Regular if no style was set
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        operator unsigned int() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    private:

        bool         m_isSet;
        unsigned int m_style;
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_TEXT_STYLE_HPP

