//
// MyContentDialog.xaml.h
// Declaration of the MyContentDialog class
//

#pragma once

#include "MyContentDialog.g.h"

namespace BasicUWP
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class MyContentDialog sealed
	{
	public:
		MyContentDialog();
        property Platform::String^ MyTextContent {
            Platform::String^ get();
            void set(Platform::String^ value);
        }
	private:
        Platform::String^ m_myTextContent;
		void ContentDialog_PrimaryButtonClick(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ args);
		void ContentDialog_SecondaryButtonClick(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ args);
	};
}
