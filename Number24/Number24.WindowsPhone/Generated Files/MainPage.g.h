﻿

#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class TextBox;
                ref class TextBlock;
            }
        }
    }
}

namespace Number24
{
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::TextBox^ txtNumber1;
        private: ::Windows::UI::Xaml::Controls::TextBox^ txtNumber2;
        private: ::Windows::UI::Xaml::Controls::TextBox^ txtNumber3;
        private: ::Windows::UI::Xaml::Controls::TextBox^ txtNumber4;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtblockResult;
    };
}

