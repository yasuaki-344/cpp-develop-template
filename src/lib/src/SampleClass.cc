/**
 * @file SampleClass.cc
 * @brief This is just example.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#include "SampleClass.h"

#include <iostream>

namespace {
}

namespace CppDevelopTemplate::lib {
/**
 * @brief Default constructor.
 */
SampleClass::SampleClass()
{
    std::cout << "constructor is called" << std::endl;
}

void SampleClass::publicFunction()
{
    privateFunction();
}

void SampleClass::privateFunction()
{
    privateMember_.push_back(1.0);
}
} // namespace CppDevelopTemplate::lib
