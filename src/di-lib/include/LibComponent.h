/**
 * @file LibComponent.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_LIB_COMPONENT_H
#define CPP_DEVELOP_TEMPLATE_LIB_COMPONENT_H

#include <fruit/fruit.h>

#include "LibInterface.h"

namespace CppDevelopTemplate {
fruit::Component<LibInterface> getLibComponent();
}

#endif
