/**
 * @file ILib.h
 * @brief Declaration of the API of this library project.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_ILIB_H
#define CPP_DEVELOP_TEMPLATE_DI_ILIB_H

namespace CppDevelopTemplate {
/**
 * @brief API of this library project
 *
 */
class ILib {
public:
    /**
     * @brief This is just example function.
     *
     */
    virtual void execute() = 0;
};
}
#endif
