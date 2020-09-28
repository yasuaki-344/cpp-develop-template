/**
 * @file main.cc
 * @brief This is sample application.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi
 */

#include "Lib.h"

int main()
{
    fruit::Injector<CppDevelopTemplate::ILib> injector(CppDevelopTemplate::getLib);
    CppDevelopTemplate::ILib* lib(injector);

    lib->execute();
    return 0;
}
