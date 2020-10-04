/**
 * @file PimplLib.h
 * @brief This is just example for PImpl pattern implementation.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_PIMPL_LIB_H
#define CPP_DEVELOP_TEMPLATE_PIMPL_LIB_H

#include <cstdint>
#include <memory>

namespace CppDevelopTemplate {
/**
 * @brief forward declaration of the implementation class
 *
 */
class PimplLibImplementor;

/**
 * @brief Library interfaces.
 *
 */
class PimplLib final {
private:
    std::unique_ptr<PimplLibImplementor> implementor_;

public:
    PimplLib();
    /**
     * @brief Avoids implicit generation of the copy constructor.
     */
    PimplLib(const PimplLib&) = delete;
    /**
     * @brief Avoids implicit generation of the move constructor.
     */
    PimplLib(PimplLib&&) noexcept = delete;
    ~PimplLib() noexcept;

public:
    /**
     * @brief Avoids implicit generation of the copy assignment operator.
     */
    PimplLib& operator=(const PimplLib&) = delete;

    /**
     * @brief Avoids implicit generation of the move assignment operator.
     */
    PimplLib& operator=(PimplLib&&) noexcept = delete;

public:
    std::int64_t execute();
};
}
#endif
