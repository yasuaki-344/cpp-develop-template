#include "StdoutWriter.h"

namespace CppDevelopTemplate {
/**
 * @brief 内部クラスのインターフェースの実装
 *
 */
class StdoutWriter : public IWriter {
public:
    /**
     * @brief Construct a new StdoutWriter object
     *
     */
    INJECT(StdoutWriter()) = default;

    /**
     * @brief 内部インターフェースのメソッドの実装
     *
     * @param s
     */
    void write(std::string s) override { std::cout << s; }
};

/**
 * @brief Get the Stdout Writer object
 *
 * @return fruit::Component<IWriter>
 */
fruit::Component<IWriter> getStdoutWriter()
{
    return fruit::createComponent().bind<IWriter, StdoutWriter>();
}
}
