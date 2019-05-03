//
// BlankPage.xaml.cpp
// Implementation of the BlankPage class
//

#include "pch.h"
#include "CustomPageAsDialog.xaml.h"

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

CustomPageAsDialog::CustomPageAsDialog()
{
    InitializeComponent();
    statusUpdateInDialog->Text = "CustomPageAsDialog";
}

void CustomPageAsDialog::customXamlContentDialog_Opened(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs^ args)
{
    statusUpdateInDialog->Text = "Xaml Opened";
}

void CustomPageAsDialog::customXamlContentDialog_Closed(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs^ args)
{
    statusUpdateInDialog->Text = "Xaml Closed";
}

Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::ContentDialogResult>^ CustomPageAsDialog::showSustomXamlContentDialog()
{
    try {
        return customXamlContentDialog->ShowAsync();
    } catch (Platform::InvalidArgumentException^ e) {
        static int i = 0;
        i++;
    }
    return nullptr;
}
