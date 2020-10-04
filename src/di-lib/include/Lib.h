/**
 * @file Lib.h
 * @brief Declaration of the functions to provide an implementation of ILib interface.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_H

#include <fruit/fruit.h>

#include "ILib.h"

namespace CppDevelopTemplate {
/**
 * @brief Get the component that provides an implementation of ILib.
 *
 * @return Component that provides an implementation of ILib.
 */
fruit::Component<ILib> getLib();
}

#endif
