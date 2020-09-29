/**
 * @file DiLibTest.cc
 * @brief This is sample unit test.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi
 */
#include <gtest/gtest.h>

namespace {
/**
 * @brief This class derives a class from testing::Test
 *        for using the same data configuration for multiple tests.
 */
class DiLibTest : public testing::Test {
protected:
    /**
     * @brief Constructor
     */
    DiLibTest() = default;

    /**
     * @brief Destructor
     */
    virtual ~DiLibTest() noexcept = default;

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
} /* unnamed namespace */

TEST_F(DiLibTest, ExecutesCorrectly)
{
    auto expect = 0;
    auto actual = 0;
    ASSERT_EQ(expect, actual);
}
