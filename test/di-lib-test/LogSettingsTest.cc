/**
 * @file LogSettingsTest.cc
 * @brief Implementation of unit test for LogSettings data class.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <fstream>

#include <cereal/archives/json.hpp>
#include <gtest/gtest.h>

#include "logger/LogSettings.h"

namespace {
/**
 * @brief This class derives a class from testing::Test
 *        for using the same data configuration for multiple tests.
 */
class LogSettintsTest : public testing::Test {
protected:
    /**
     * @brief Constructor
     */
    LogSettintsTest() = default;

    /**
     * @brief Destructor
     */
    virtual ~LogSettintsTest() noexcept = default;

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

TEST_F(LogSettintsTest, json)
{
    CppDevelopTemplate::LogSettings target {
        "AppName", "logs/DILib.log", 1048576 * 5, 3
    };
    std::ofstream ofs("result.json", std::ios::out);
    if (ofs) {
        try {
            (cereal::JSONOutputArchive(ofs))(cereal::make_nvp("Log", target));
        } catch (const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }
}
