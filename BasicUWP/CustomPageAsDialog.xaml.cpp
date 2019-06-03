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
    m_textContent = "mycontent";
}

void CustomPageAsDialog::customXamlContentDialog_Opened(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogOpenedEventArgs^ args)
{
}

void CustomPageAsDialog::customXamlContentDialog_Closed(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs^ args)
{
}

Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::ContentDialogResult>^ CustomPageAsDialog::showCustomXamlContentDialog()
{
    try {
        return customXamlContentDialog->ShowAsync();
    } catch (Platform::InvalidArgumentException^ e) {
        static int i = 0;
        i++;
    }
    return nullptr;
}

Platform::String^ CustomPageAsDialog::TextContent::get()
{
    return m_textContent;
}

void CustomPageAsDialog::TextContent::set(Platform::String^ value)
{
    m_textContent = value;
}
