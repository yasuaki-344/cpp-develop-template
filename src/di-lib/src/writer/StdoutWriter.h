/**
 * @file Logger.h
 * @brief Declaration of the functions to provide an implementation of IWriter.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_STDOUT_WRITER_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_STDOUT_WRITER_H
#include <fruit/fruit.h>

#include "IWriter.h"

namespace CppDevelopTemplate {
/**
 * @brief Get component that provides an implementation of IWriter.
 *
 * @return Component that provides an implementation of IWriter.
 */
fruit::Component<IWriter> getStdoutWriter();
}

#endif
