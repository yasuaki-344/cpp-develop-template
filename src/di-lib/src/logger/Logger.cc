/**
 * @file Logger.cc
 * @brief Declaration of the functions to provide an implementation of logger.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <cstddef>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include "logger/Logger.h"

namespace {
const std::string LoggerName("DiLib");
const std::string LoggerOutputPath("logs/DILib.log");
constexpr std::size_t MaxFileSize = 1048576 * 5;
constexpr std::size_t MaxFiles = 3;
}

namespace CppDevelopTemplate {
fruit::Component<spdlog::logger> getStdoutLogger()
{
    auto logger = spdlog::stdout_color_mt(LoggerName);
    return fruit::createComponent().bindInstance(*logger);
}

fruit::Component<spdlog::logger> getBasicFileLogger()
{
    auto logger = spdlog::basic_logger_mt(LoggerName, LoggerOutputPath);
    return fruit::createComponent().bindInstance(*logger);
}

fruit::Component<spdlog::logger> getRotatingLogger()
{
    auto logger = spdlog::rotating_logger_mt(LoggerName, LoggerOutputPath, MaxFileSize, MaxFiles);
    return fruit::createComponent().bindInstance(*logger);
}
}
