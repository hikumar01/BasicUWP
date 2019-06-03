//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "CustomPageAsDialog.xaml.h"
#include "MyContentDialog.xaml.h"

using namespace BasicUWP;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

MainPage::MainPage()
{
	InitializeComponent();
    contentDialog = ref new ContentDialog();
}

void MainPage::openCodeContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    contentDialog->Title = "My Title";
    //contentDialog->Content = "My Content";
    contentDialog->PrimaryButtonText = "Yes";
    contentDialog->SecondaryButtonText = "No";
    contentDialog->PrimaryButtonClick += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::ContentDialog^,
        Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^>(
            [this](Platform::Object^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ e) {
        this->Button_Click(sender, e);
    });

    contentDialog->ShowAsync();
}

void MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ e)
{
    contentDialog->Title = "Primary Button Clicked";
}

void MainPage::sameXamlContentDialog_Opened(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs^ args)
{
    buttonSameXaml->Content = "Xaml Opened";
}

void MainPage::openSameXamlContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    sameXamlContentDialog->ShowAsync();
}

void MainPage::sameXamlContentDialog_Closed(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs^ args)
{
    buttonSameXaml->Content = "Xaml Closed";
}

void MainPage::openDifferentXamlContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    CustomPageAsDialog^ pageAsDialog = ref new CustomPageAsDialog();
    DialogContainer3->Children->Append(pageAsDialog);
    pageAsDialog->showCustomXamlContentDialog();
}

void MainPage::openMyContentDialog(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    MyContentDialog^ pageAsDialog = ref new MyContentDialog();
    //DialogContainer3->Children->Append(pageAsDialog);
    pageAsDialog->ShowAsync();
}

void MainPage::OnApplyTemplate()
{
    auto dialogSpace = GetTemplateChild("DialogSpaceContent1");
    UIElement^ spectrumDialogContent = safe_cast<Windows::UI::Xaml::UIElement^>(dialogSpace);
    contentDialog->Content = spectrumDialogContent;
}
