#include "StdoutWriter.h"

namespace CppDevelopTemplate {

class StdoutWriter : public IWriter {
public:
    INJECT(StdoutWriter()) = default;

    virtual void write(std::string s) override
    {
        std::cout << s;
    }
};

fruit::Component<IWriter> getStdoutWriter()
{
    return fruit::createComponent()
        .bind<IWriter, StdoutWriter>();
}
}
