/**
 * @file SampleClass.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_LIB_SAMPLE_CLASS_H
#define CPP_DEVELOP_TEMPLATE_LIB_SAMPLE_CLASS_H

#include <vector>

namespace CppDevelopTemplate::lib {
class SampleClass {
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

private:
    /** 1st primitive translation vector. */
    std::vector<double> privateMember_;

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
    void publicFunction();

private:
    void privateFunction();
};
}
#endif
