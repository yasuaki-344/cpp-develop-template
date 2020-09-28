/**
 * @file WriterInterface.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_LIB_WRITER_INTERFACE_H
#define CPP_DEVELOP_TEMPLATE_LIB_WRITER_INTERFACE_H

#include <iostream>

namespace CppDevelopTemplate {
class WriterInterface {
public:
    virtual void write(std::string s) = 0;
};
}
#endif
