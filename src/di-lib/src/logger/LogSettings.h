/**
 * @file LogSettings.h
 * @brief Declaration of the data class for log settings.
 * @copyright Copyright (c) 2020 Yasuaki Miyoshi.
 *
 * This software is released under the MIT License.
 * see http://opensource.org/licenses/mit-license.php
 */
#ifndef CPP_DEVELOP_TEMPLATE_DI_LIB_LOG_SETTINGS_H
#define CPP_DEVELOP_TEMPLATE_DI_LIB_LOG_SETTINGS_H

#include <cereal/cereal.hpp>
#include <cstdint>
#include <string>

namespace CppDevelopTemplate {
/**
 * @brief Data class for log settings.
 *
 */
struct LogSettings {
    std::string loggerName;
    std::string logOutputPath;
    /** [byte] */
    std::size_t maxFileSize;
    std::size_t maxFiles;

    template <class Archive>
    void serialize(Archive& archive)
    {
        archive(
            CEREAL_NVP(loggerName),
            CEREAL_NVP(logOutputPath),
            CEREAL_NVP(maxFileSize),
            CEREAL_NVP(maxFiles));
    }
};
}
#endif
