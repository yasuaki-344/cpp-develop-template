/**
 * @file ILib.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_ILIB_H
#define CPP_DEVELOP_TEMPLATE_DI_ILIB_H

namespace CppDevelopTemplate {
/**
 * @brief ライブラリのインターフェース.
 *
 */
class ILib {
public:
    /**
     * @brief サンプルの関数
     *
     */
    virtual void execute() = 0;
};
}
#endif
