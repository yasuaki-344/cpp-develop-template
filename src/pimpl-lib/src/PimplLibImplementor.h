/**
 * @file PimplLibImplementor.h
 * @brief This is just example for PImpl pattern implementation.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_PIMPL_LIB_IMPLEMENTOR_H
#define CPP_DEVELOP_TEMPLATE_PIMPL_LIB_IMPLEMENTOR_H
#include <cstdint>

namespace CppDevelopTemplate {
class PimplLibImplementor final {
public:
    PimplLibImplementor();
    /**
     * @brief Avoids implicit generation of the copy constructor.
     */
    PimplLibImplementor(const PimplLibImplementor&) = delete;
    /**
     * @brief Avoids implicit generation of the move constructor.
     */
    PimplLibImplementor(PimplLibImplementor&&) noexcept = delete;
    ~PimplLibImplementor() noexcept;

public:
    /**
     * @brief Avoids implicit generation of the copy assignment operator.
     */
    PimplLibImplementor& operator=(const PimplLibImplementor&) = delete;

    /**
     * @brief Avoids implicit generation of the move assignment operator.
     */
    PimplLibImplementor& operator=(PimplLibImplementor&&) noexcept = delete;

public:
    std::int64_t execute();
};
}
#endif
