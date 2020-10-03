/**
 * @file StdoutWriter.cc
 * @brief Declaration of the functions to provide an implementation of IWriter.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#include "writer/StdoutWriter.h"
#include "logger/Logger.h"

namespace CppDevelopTemplate {
/**
 * @brief This is example of non-public class in library project.
 *
 */
class StdoutWriter : public IWriter {
private:
    spdlog::logger* logger_;

public:
    /**
     * @brief Initializes a new instance of StdoutWriter
     *        using the specified logger object.
     *
     * @param logger Logger object
     */
    StdoutWriter(spdlog::logger* logger)
        : logger_(logger)
    {
    }

    using Inject = StdoutWriter(spdlog::logger*);

    /**
     * @brief This is example function.
     *
     * @param input Input example.
     */
    void write(const std::string& input) override
    {
        logger_->info("write function is called");
        std::cout << input;
    }
};

fruit::Component<IWriter> getStdoutWriter()
{
    return fruit::createComponent()
        .install(getStdoutLogger)
        .bind<IWriter, StdoutWriter>();
}
}
