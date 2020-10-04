/**
 * @file StdoutWriter.cc
 * @brief Implementation of unit test for StdoutWriter class.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <gtest/gtest.h>

#include <gtest/fakeit.hpp>

#include "writer/StdoutWriter.h"
#include "logger/Logger.h"

namespace {
/**
 * @brief This class derives a class from testing::Test
 *        for using the same data configuration for multiple tests.
 */
class StdoutWriterTest : public testing::Test {
protected:
    /**
     * @brief Constructor
     */
    StdoutWriterTest() = default;

    /**
     * @brief Destructor
     */
    virtual ~StdoutWriterTest() noexcept = default;

protected:
    /**
     * @brief Prepares the objects for each test.
     */
    virtual void SetUp() override
    {
        spdlog::drop_all();
    }

    /**
     * @brief Releases any resources allocated in SetUp().
     */
    virtual void TearDown() override
    {
    }
};

/**
 * @brief Get component that provides an implemenation of IWriter whose dependency is modked.
 *
 * @return Component that provides an implemenation of IWriter  whose dependency is modked.
 */
fruit::Component<CppDevelopTemplate::IWriter> getLibComponent()
{
    return fruit::createComponent().install(CppDevelopTemplate::getStdoutWriter);
}
}

TEST_F(StdoutWriterTest, OutputLogToStdoutCorrectly)
{
    using namespace CppDevelopTemplate;

    fruit::Injector<IWriter> injector(getLibComponent);
    auto target = injector.get<IWriter*>();
    target->write("this is test");
}
