/**
 * @file main.cc
 * @brief This is just example to use library which is implemented using fruit DI framework.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include "Lib.h"

int main()
{
    fruit::Injector<CppDevelopTemplate::ILib> injector(CppDevelopTemplate::getLib);
    CppDevelopTemplate::ILib* lib(injector);

    lib->execute();
    return 0;
}
