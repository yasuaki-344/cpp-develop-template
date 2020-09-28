/**
 * @file IWriter.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_IWRITER_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_IWRITER_H

#include <iostream>

namespace CppDevelopTemplate {
class IWriter {
public:
    virtual void write(std::string s) = 0;
};
}
#endif
