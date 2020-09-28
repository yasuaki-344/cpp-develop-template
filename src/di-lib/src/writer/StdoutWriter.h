/**
 * @file Lib.h
 * @brief This is just examples.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 */
#ifndef CPP_DEVELOP_TEMPLATE_LIB_WRITER_INTREFACE_H
#define CPP_DEVELOP_TEMPLATE_LIB_WRITER_INTREFACE_H

#include <fruit/fruit.h>

#include "WriterInterface.h"

namespace CppDevelopTemplate {
fruit::Component<WriterInterface> getWriterInterfaceComponent();
}

#endif

