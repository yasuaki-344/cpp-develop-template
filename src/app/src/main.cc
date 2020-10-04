/**
 * @file main.cc
 * @brief This is just example to use library function.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <iostream>

#include "SampleClass.h"

int main()
{
    CppDevelopTemplate::lib::SampleClass lib;
    lib.publicFunction();
    return 0;
}
