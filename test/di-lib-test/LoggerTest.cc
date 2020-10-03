/**
 * @file LoggerTest.cc
 * @brief Implementation of unit test for an implementation of logger.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <gtest/gtest.h>

#include <gtest/fakeit.hpp>

#include "logger/Logger.h"

namespace {
/**
 * @brief This class derives a class from testing::Test
 *        for using the same data configuration for multiple tests.
 */
class LoggerTest : public testing::Test {
protected:
    /**
     * @brief Constructor
     */
    LoggerTest() = default;

    /**
     * @brief Destructor
     */
    virtual ~LoggerTest() noexcept = default;

protected:
    /**
     * @brief Prepares the objects for each test.
     */
    virtual void SetUp() override
    {
    }

    /**
     * @brief Releases any resources allocated in SetUp().
     */
    virtual void TearDown() override
    {
    }
};
}

TEST_F(LoggerTest, OutputLogToStdoutCorrectly)
{
    using namespace CppDevelopTemplate;
    fruit::Injector<spdlog::logger> injector(getStdoutLogger);
    auto target = injector.get<spdlog::logger*>();

    target->set_level(spdlog::level::debug);
    target->debug("Debug log");
    target->info("Information log");
    target->warn("Warning log");
    target->error("Error log");
    target->critical("Critical log");
}
