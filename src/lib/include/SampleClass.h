/**
 * @file SampleClass.h
 * @brief Declaration of basic class.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_LIB_SAMPLE_CLASS_H
#define CPP_DEVELOP_TEMPLATE_LIB_SAMPLE_CLASS_H

#include <vector>

namespace CppDevelopTemplate::lib {
class SampleClass {
private:
    std::vector<double> privateMember_;

public:
    SampleClass();

    /**
     * @brief Avoids implicit generation of the copy constructor.
     */
    SampleClass(const SampleClass&) = delete;
    /**
     * @brief Avoids implicit generation of the move constructor.
     */
    SampleClass(SampleClass&&) noexcept = delete;
    /**
     * @brief Default destructor.
     */
    ~SampleClass() noexcept = default;

public:
    /**
     * @brief Avoids implicit generation of the copy assignment operator.
     */
    SampleClass& operator=(const SampleClass&) = delete;

    /**
     * @brief Avoids implicit generation of the move assignment operator.
     */
    SampleClass& operator=(SampleClass&&) noexcept = delete;

public:
    /**
     * @brief This is just example.
     *
     */
    void publicFunction();

private:
    /**
     * @brief This is just example.
     *
     */
    void privateFunction();
};
}
#endif
