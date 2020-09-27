
#include <iostream>

#include "SampleClass.h"

int main(int argc, char **argv)
{
    static_cast<void>(argc);
    static_cast<void>(argv);
    std::cout << "appplication start" << std::endl;

    auto lib = CppDevelopTemplate::lib::SampleClass();
    lib.publicFunction();
    return 0;
}
