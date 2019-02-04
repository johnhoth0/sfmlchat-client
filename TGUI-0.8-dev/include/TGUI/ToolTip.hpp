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


#ifndef TGUI_TOOLTIP_HPP
#define TGUI_TOOLTIP_HPP

#include <TGUI/Config.hpp>
#include <TGUI/Vector2f.hpp>
#include <SFML/System/Time.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// @brief Interface to set the settings for the tool tips
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class TGUI_API ToolTip
    {
    public:

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the time that the mouse has to stand still before the tooltip becomes visible
        ///
        /// @param timeToDisplay Time before displaying tooltip
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static void setTimeToDisplay(const sf::Time& timeToDisplay);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the time that the mouse has to stand still before the tooltip becomes visible
        ///
        /// @return Time before displaying tooltip
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static sf::Time getTimeToDisplay();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the default distance between the mouse position and the tool tip
        ///
        /// @param distance  Distance between mouse and tool tip
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static void setDistanceToMouse(const Vector2f& distance);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the default distance between the mouse position and the tool tip
        ///
        /// @return Distance between mouse and tool tip
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static Vector2f getDistanceToMouse();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    private:

        static sf::Time m_timeToDisplay;
        static Vector2f m_distanceToMouse;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    };


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_TOOLTIP_HPP
