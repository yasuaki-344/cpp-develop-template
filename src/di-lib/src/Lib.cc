#include "Lib.h"
#include "writer/StdoutWriter.h"
#include <fruit/fruit.h>
#include <iostream>

namespace CppDevelopTemplate
{
    class Lib : public ILib
    {
    private:
        IWriter *writer;

    public:
        INJECT(Lib(IWriter *writer)) : writer(writer) {}

        virtual void execute() override
        {
            writer->write("writer output:");
            std::cout << "Hello world!!!" << std::endl;
        }
    };

    fruit::Component<ILib> getLib()
    {
        return fruit::createComponent()
            .install(getStdoutWriter)
            .bind<ILib, Lib>();
    }
} // namespace CppDevelopTemplate
