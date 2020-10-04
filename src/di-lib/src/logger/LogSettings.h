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

#include <cereal/archives/json.hpp>
#include <cereal/cereal.hpp>
#include <cstdint>
#include <fstream>
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

    /**
     * @brief Serializes JSON data and outputs to the specified file path.
     *
     * @param path Output file path.
     */
    void serializeJson(const std::string& path) const
    {
        std::ofstream ofs(path, std::ios::out);
        if (ofs) {
            try {
                (cereal::JSONOutputArchive(ofs))(cereal::make_nvp("Log", *this));
            } catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
        }
    }

    /**
     * @brief Deserialize JSON data from the specified file path.
     *
     * @param path File path to read JSON data.
     */
    void deserializeJson(const std::string& path)
    {
        std::ifstream ifs(path, std::ios::in);
        if (ifs) {
            try {
                (cereal::JSONInputArchive(ifs))(cereal::make_nvp("Log", *this));
            } catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
        }
    }
};
}
#endif
