#ifndef CPP_DEVELOP_TEMPLATE_PIMPL_LIB_H
#define CPP_DEVELOP_TEMPLATE_PIMPL_LIB_H

#include <cstdint>
#include <memory>

namespace CppDevelopTemplate {
/**
 * @brief 実装クラスの前方宣言
 *
 */
class PimplLibImplementor;

/**
 * @brief 外部公開クラスの宣言
 *
 */
class PimplLib final {
private:
    std::unique_ptr<PimplLibImplementor> implementor_;

public:
    PimplLib();
    /**
     * @brief Avoids implicit generation of the copy constructor.
     */
    PimplLib(const PimplLib&) = delete;
    /**
     * @brief Avoids implicit generation of the move constructor.
     */
    PimplLib(PimplLib&&) noexcept = delete;
    ~PimplLib() noexcept;

public:
    /**
     * @brief Avoids implicit generation of the copy assignment operator.
     */
    PimplLib& operator=(const PimplLib&) = delete;

    /**
     * @brief Avoids implicit generation of the move assignment operator.
     */
    PimplLib& operator=(PimplLib&&) noexcept = delete;

public:
    std::int64_t execute();
};
}
#endif
