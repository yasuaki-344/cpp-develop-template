#include "PimplLib.h"
#include "PimplLibImplementor.h"

namespace CppDevelopTemplate {

/**
 * @brief Default constructor
 *
 */
PimplLib::PimplLib()
    : implementor_(new PimplLibImplementor())
{
}

/**
 * @brief Default destructor
 *
 */
PimplLib::~PimplLib() = default;

std::int64_t PimplLib::execute()
{
    return implementor_->execute();
}
}
