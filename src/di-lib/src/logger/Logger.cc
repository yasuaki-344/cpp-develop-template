/**
 * @file Logger.cc
 * @brief Declaration of the functions to provide an implementation of logger.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <spdlog/sinks/stdout_color_sinks.h>

#include "logger/Logger.h"

namespace {
const std::string loggerName("DiLib");
}

namespace CppDevelopTemplate {
fruit::Component<spdlog::logger> getStdoutLogger()
{
    auto logger = spdlog::stdout_color_mt(loggerName);
    return fruit::createComponent().bindInstance(*logger);
}
}
