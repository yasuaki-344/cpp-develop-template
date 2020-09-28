/**
 * @file Lib.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_LIB_H
#define CPP_DEVELOP_TEMPLATE_LIB_H

#include <fruit/fruit.h>

#include "LibInterface.h"
#include "writer/WriterInterface.h"

namespace CppDevelopTemplate {
fruit::Component<LibInterface> getLibComponent();
}

#endif

