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


#ifndef TGUI_CHILD_WINDOW_RENDERER_HPP
#define TGUI_CHILD_WINDOW_RENDERER_HPP


#include <TGUI/Renderers/WidgetRenderer.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    class TGUI_API ChildWindowRenderer : public WidgetRenderer
    {
    public:

        using WidgetRenderer::WidgetRenderer;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the size of the borders
        ///
        /// @param borders  Size of the borders
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorders(const Borders& borders);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the size of the borders
        ///
        /// @return border size
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Borders getBorders() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the height of the title bar
        ///
        /// @param height  New height of the title bar
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTitleBarHeight(float height);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the height of the title bar
        ///
        /// @return Title bar height
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        float getTitleBarHeight() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the title bar
        ///
        /// @param color  New title bar color
        ///
        /// Note that this color is ignored when you set an image as title bar.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTitleBarColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the title bar
        ///
        /// @return Title bar color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTitleBarColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the title that is displayed in the title bar of the child window
        ///
        /// @param color  New title color for the child window
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTitleColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the title that is displayed in the title bar of the child window
        ///
        /// @return Title color for the child window
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTitleColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background
        ///
        /// @param color  New background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the background
        ///
        /// @return Background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders
        ///
        /// @return border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the distance between the title bar and the actual contents of the child window
        /// @param border  Space between title bar and child window contents
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderBelowTitleBar(float border);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the distance between the title bar and the actual contents of the child window
        /// @return Space between title bar and child window contents
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        float getBorderBelowTitleBar() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the distance of the title or close button from the side of the title bar
        ///
        /// @param distanceToSide  Distance between the title and the side of the title bar
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setDistanceToSide(float distanceToSide);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the distance of the title or close button from the side of the title bar
        ///
        /// @return Distance between the title and the side of the title bar
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        float getDistanceToSide() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the distance between the title buttons if multiple exist
        ///
        /// @param padding  Distance between the title buttons
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setPaddingBetweenButtons(float padding);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the distance between the title buttons if multiple exist
        ///
        /// @return Distance between the title buttons
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        float getPaddingBetweenButtons() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the minimum width of the area where you can drag to resize the child window
        /// @param minimumBoderWidth  Minimum amount of pixels where the child window can be dragged to resize it
        ///
        /// If the border is larger than minimumBoderWidth then this function has no effect. If the borders are smaller,
        /// several invisible pixels next to the border can also be used to resize the child window.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setMinimumResizableBorderWidth(float minimumBoderWidth);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the minimum width of the area where you can drag to resize the child window
        /// @return Minimum amount of pixels where the child window can be dragged to resize it
        ///
        /// If the border is larger than this value then it has no effect. If the borders are smaller, several invisible
        /// pixels next to the border can also be used to resize the child window.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        float getMinimumResizableBorderWidth() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes whether characters are rendered on top of the title buttons
        /// @param showText  Should text be shown on the title buttons?
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setShowTextOnTitleButtons(bool showText);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns whether characters are rendered on top of the title buttons
        /// @return Should text be shown on the title buttons?
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool getShowTextOnTitleButtons() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image of the title bar
        ///
        /// @param texture  New title bar texture
        ///
        /// When this image is set, the title bar color property will be ignored.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureTitleBar(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image of the title bar
        ///
        /// @return title bar texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Texture& getTextureTitleBar() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the renderer data of the optional close button
        ///
        /// @param rendererData  Data about how the close button should look
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setCloseButton(std::shared_ptr<RendererData> rendererData);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the renderer data of the close button
        ///
        /// @return Data about how the close button looks
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        std::shared_ptr<RendererData> getCloseButton() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the renderer data of the optional maximize button
        ///
        /// @param rendererData  Data about how the maximize button should look
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setMaximizeButton(std::shared_ptr<RendererData> rendererData);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the renderer data of the maximize button
        ///
        /// @return Data about how the maximize button looks
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        std::shared_ptr<RendererData> getMaximizeButton() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the renderer data of the optional minimize button
        ///
        /// @param rendererData  Data about how the minimize button should look
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setMinimizeButton(std::shared_ptr<RendererData> rendererData);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the renderer data of the minimize button
        ///
        /// @return Data about how the minimize button looks
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        std::shared_ptr<RendererData> getMinimizeButton() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_CHILD_WINDOW_RENDERER_HPP
