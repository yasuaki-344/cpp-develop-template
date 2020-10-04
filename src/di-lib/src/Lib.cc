/**
 * @file Lib.cc
 * @brief Implementation of the functions to provide an implementation of ILib.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include <iostream>

#include <fruit/fruit.h>

#include "Lib.h"
#include "writer/StdoutWriter.h"

namespace CppDevelopTemplate {

/**
 * @brief This is example of public class in library project.
 *
 */
class Lib : public ILib {
private:
    IWriter* writer;

public:
    /**
     * @brief Initializes a new instance of Lib Class using the specified IWriter object.
     *
     * @param writer
     */
    Lib(IWriter* writer)
        : writer(writer)
    {
    }

    using Inject = Lib(IWriter*);

    void execute() override
    {
        writer->write("writer output:");
        std::cout << "Hello world!!!" << std::endl;
    }
};

fruit::Component<ILib> getLib()
{
    return fruit::createComponent().install(getStdoutWriter).bind<ILib, Lib>();
}
}
