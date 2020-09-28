/**
 * @file StdoutWriter.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_STDOUT_WRITER_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_STDOUT_WRITER_H

#include <fruit/fruit.h>

#include "IWriter.h"

namespace CppDevelopTemplate {
/**
 * @brief Get the Stdout Writer object
 *
 * @return fruit::Component<IWriter>
 */
fruit::Component<IWriter> getStdoutWriter();
}

#endif
