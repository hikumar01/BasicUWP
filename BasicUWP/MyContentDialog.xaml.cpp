//
// MyContentDialog.xaml.cpp
// Implementation of the MyContentDialog class
//

#include "pch.h"
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

// The Content Dialog item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

BasicUWP::MyContentDialog::MyContentDialog()
{
	InitializeComponent();
    MyTextContent = "mycontent";
}

void BasicUWP::MyContentDialog::ContentDialog_PrimaryButtonClick(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ args)
{
}

void BasicUWP::MyContentDialog::ContentDialog_SecondaryButtonClick(Windows::UI::Xaml::Controls::ContentDialog^ sender, Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs^ args)
{
}

Platform::String^ MyContentDialog::MyTextContent::get()
{
    return m_myTextContent;
}

void MyContentDialog::MyTextContent::set(Platform::String^ value)
{
    m_myTextContent = value;
}
