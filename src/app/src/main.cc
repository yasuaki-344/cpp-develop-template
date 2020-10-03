/**
 * @file Main.cc
 * @brief This is sample application.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi
 */

#include <iostream>
#include <spdlog/spdlog.h>

#include "SampleClass.h"

int main(int argc, char** argv)
{
    static_cast<void>(argc);
    static_cast<void>(argv);
    spdlog::info("appplication start");

    CppDevelopTemplate::lib::SampleClass lib;
    lib.publicFunction();
    return 0;
}
