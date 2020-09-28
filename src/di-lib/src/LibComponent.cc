/**
 * @file LibComponent.cc
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#include "LibComponent.h"
#include "Lib.h"

namespace CppDevelopTemplate {
fruit::Component<LibInterface> getLibInterfaceComponent()
{
    return getLibComponent();
}
}
