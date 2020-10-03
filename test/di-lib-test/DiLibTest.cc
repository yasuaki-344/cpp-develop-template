/**
 * @file DiLibTest.cc
 * @brief This is sample unit test.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi
 */
#include <gtest/gtest.h>

#include <gtest/fakeit.hpp>

#include "Lib.h"
#include "StdoutWriter.h"

namespace {
static fakeit::Mock<CppDevelopTemplate::IWriter> mock;

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
        mock.Reset();
    }
};

/**
 * @brief Get the Mock Writer object
 *
 * @return fruit::Component<CppDevelopTemplate::IWriter>
 */
fruit::Component<CppDevelopTemplate::IWriter> getMockWriter()
{
    return fruit::createComponent().bindInstance(mock.get());
}

/**
 * @brief Get the Lib Component object
 *
 * @return fruit::Component<CppDevelopTemplate::ILib>
 */
fruit::Component<CppDevelopTemplate::ILib> getLibComponent()
{
    return fruit::createComponent()
        .replace(CppDevelopTemplate::getStdoutWriter)
        .with(getMockWriter)
        .install(CppDevelopTemplate::getLib);
}

} /* unnamed namespace */

TEST_F(DiLibTest, ExecutesCorrectly)
{
    using namespace CppDevelopTemplate;
    fakeit::Fake(Method(mock, write));

    fruit::Injector<ILib> injector(getLibComponent);
    auto target = injector.get<ILib*>();
    target->execute();
    auto expect = 0;
    auto actual = 0;
    ASSERT_EQ(expect, actual);
}
