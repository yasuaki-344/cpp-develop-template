#include "Lib.h"
#include <iostream>
#include <fruit/fruit.h>
#include "writer/WriterInterface.h"
#include "writer/StdoutWriter.h"

namespace CppDevelopTemplate {
class Lib : public LibInterface {
private:
    WriterInterface* writer;
public:
    INJECT(Lib(WriterInterface* writer)) : writer(writer) {}

    virtual void execute() override
    {
        writer->write("writer output:");
        std::cout << "Hello world!!!" << std::endl;
    }
};

fruit::Component<LibInterface> getLibComponent()
{
    return fruit::createComponent()
        .install(getWriterInterfaceComponent)
        .bind<LibInterface, Lib>();
}
}
