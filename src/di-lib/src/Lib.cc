#include "Lib.h"
#include "writer/StdoutWriter.h"
#include <fruit/fruit.h>
#include <iostream>

namespace CppDevelopTemplate {
/**
 * @brief ライブラリのインターフェースの実装
 *
 */
class Lib : public ILib {
private:
    IWriter* writer;

public:
    /**
     * @brief Construct a new Lib object
     *
     */
    INJECT(Lib(IWriter* writer))
        : writer(writer)
    {
    }

    /**
     * @brief インターフェースの関数の実装
     *
     */
    void execute() override
    {
        writer->write("writer output:");
        std::cout << "Hello world!!!" << std::endl;
    }
};

/**
 * @brief Get the Lib object
 *
 * @return fruit::Component<ILib>
 */
fruit::Component<ILib> getLib()
{
    return fruit::createComponent().install(getStdoutWriter).bind<ILib, Lib>();
}
}
