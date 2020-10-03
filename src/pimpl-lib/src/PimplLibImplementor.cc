#include "PimplLibImplementor.h"
#include <iostream>

namespace CppDevelopTemplate {

/**
 * @brief Default constructor
 *
 */
PimplLibImplementor::PimplLibImplementor() = default;

/**
 * @brief Default destructor
 *
 */
PimplLibImplementor::~PimplLibImplementor() = default;

std::int64_t PimplLibImplementor::execute()
{
    std::cout << "implementor function is called" << std::endl;
    return 1;
}
}
