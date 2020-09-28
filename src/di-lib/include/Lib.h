/**
 * @file Lib.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_H

#include <fruit/fruit.h>

#include "ILib.h"

namespace CppDevelopTemplate {
fruit::Component<ILib> getLib();
}

#endif

