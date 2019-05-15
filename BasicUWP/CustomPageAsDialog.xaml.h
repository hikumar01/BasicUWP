//
// BlankPage.xaml.h
// Declaration of the BlankPage class
//

#pragma once

#include "CustomPageAsDialog.g.h"

namespace BasicUWP
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class CustomPageAsDialog sealed
	{
	public:
        CustomPageAsDialog();
        Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::ContentDialogResult>^ showSustomXamlContentDialog();
        property Platform::String^ TextContent {
            Platform::String^ get();
            void set(Platform::String^ value);
        }
    private:
        Platform::String^ m_textContent;
        void customXamlContentDialog_Opened(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs^ args);
        void customXamlContentDialog_Closed(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs^ args);
    };
}
