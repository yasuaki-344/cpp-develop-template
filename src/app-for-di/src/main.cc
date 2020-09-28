/**
 * @file main.cc
 * @brief This is sample application.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi
 */

#include "LibComponent.h"

int main()
{
    fruit::Injector<CppDevelopTemplate::LibInterface> injector(CppDevelopTemplate::getLibInterfaceComponent);
    CppDevelopTemplate::LibInterface* lib(injector);

    lib->execute();
    return 0;
}
