#include "StdoutWriter.h"

namespace CppDevelopTemplate {

class StdoutWriter : public WriterInterface {
public:
    INJECT(StdoutWriter()) = default;

    virtual void write(std::string s) override
    {
        std::cout << s;
    }
};

fruit::Component<WriterInterface> getWriterInterfaceComponent()
{
    return fruit::createComponent().bind<WriterInterface, StdoutWriter>();
}
}
