/**
 * @file Logger.h
 * @brief Declaration of the functions to provide an implementation of logger.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_LOGGER_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_LOGGER_H
#include <fruit/fruit.h>
#include <spdlog/spdlog.h>

namespace CppDevelopTemplate {
/**
 * @brief Get the component that provides the logger object which outputs to stdout.
 *
 * @return Component that provides an implementation of spdlog::logger.
 */
fruit::Component<spdlog::logger> getStdoutLogger();

/**
 * @brief Get the component that provides the logger object which outputs to file.
 *
 * @return Component that provides an implementation of spdlog::logger.
 */
fruit::Component<spdlog::logger> getBasicFileLogger();

/**
 * @brief Get the component that provides the logger object which outputs to rotating log files.
 *
 * @return Component that provides an implementation of spdlog::logger.
 */
fruit::Component<spdlog::logger> getRotatingLogger();
}
#endif
