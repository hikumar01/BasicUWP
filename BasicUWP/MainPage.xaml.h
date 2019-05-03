//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace BasicUWP
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

    protected:
        virtual void OnApplyTemplate() override;

    private:
        void openCodeContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void sameXamlContentDialog_Opened(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs^ args);
        void openSameXamlContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void sameXamlContentDialog_Closed(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs^ args);
        void openDifferentXamlContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ e);

        Windows::UI::Xaml::Controls::ContentDialog^ contentDialog;
    };
}
