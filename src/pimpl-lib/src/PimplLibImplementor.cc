/**
 * @file PimplLibImplementor.cc
 * @brief This is just example for PImpl pattern implementation.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <iostream>

#include "PimplLibImplementor.h"

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
