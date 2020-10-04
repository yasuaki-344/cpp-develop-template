/**
 * @file SampleClassTest.cc
 * @brief Implementation of unit test for simple class.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <gtest/gtest.h>

#include "SampleClass.h"

namespace {
/**
 * @brief This class derives a class from testing::Test
 *        for using the same data configuration for multiple tests.
 */
class SampleTest : public testing::Test {
protected:
    /**
     * @brief Constructor
     */
    SampleTest() = default;

    /**
     * @brief Destructor
     */
    virtual ~SampleTest() noexcept = default;

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

TEST_F(SampleTest, ExecutesCorrectly)
{
    CppDevelopTemplate::lib::SampleClass target;
    target.publicFunction();
}
