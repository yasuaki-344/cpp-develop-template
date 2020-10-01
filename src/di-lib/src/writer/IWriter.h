/**
 * @file IWriter.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_IWRITER_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_IWRITER_H

#include <iostream>

namespace CppDevelopTemplate {
/**
 * @brief 内部クラスのインターフェース
 *
 */
class IWriter {
public:
    /**
     * @brief 指定の文字列を出力する
     *
     * @param s 入力の例
     */
    virtual void write(const std::string &s) = 0;
};
}
#endif
