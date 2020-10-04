/**
 * @file PimplLib.cc
 * @brief This is just example for PImpl pattern implementation.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include "PimplLib.h"
#include "PimplLibImplementor.h"

namespace CppDevelopTemplate {

/**
 * @brief Default constructor
 *
 */
PimplLib::PimplLib()
    : implementor_(new PimplLibImplementor())
{
}

/**
 * @brief Default destructor
 *
 */
PimplLib::~PimplLib() = default;

std::int64_t PimplLib::execute()
{
    return implementor_->execute();
}
}
