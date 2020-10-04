/**
 * @file SampleClass.cc
 * @brief Implementation of basic class.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <iostream>

#include "SampleClass.h"

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
}
