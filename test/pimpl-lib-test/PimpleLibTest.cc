#include <gtest/gtest.h>

#include "PimplLib.h"

namespace {
/**
 * @brief This class derives a class from testing::Test
 *        for using the same data configuration for multiple tests.
 */
class PimpleLibTest : public testing::Test {
protected:
    /**
     * @brief Constructor
     */
    PimpleLibTest() = default;

    /**
     * @brief Destructor
     */
    virtual ~PimpleLibTest() noexcept = default;

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

TEST_F(PimpleLibTest, ExecutesCorrectly)
{
    CppDevelopTemplate::PimplLib target;
    target.execute();
    ASSERT_EQ(5, target.execute());
}
