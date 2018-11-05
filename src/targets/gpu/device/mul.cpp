#include <migraph/gpu/device/mul.hpp>
#include <migraph/gpu/device/nary.hpp>

namespace migraph {
namespace gpu {
namespace device {

void mul(hipStream_t stream, const argument& result, const argument& arg1, const argument& arg2)
{
    nary(stream, result, arg1, arg2)([](auto x, auto y) { return x * y; });
}

void mul(hipStream_t stream,
         const argument& result,
         const argument& arg1,
         const argument& arg2,
         const argument& arg3)
{
    nary(stream, result, arg1, arg2, arg3)([](auto x, auto y, auto z) { return x * y * z; });
}

} // namespace device
} // namespace gpu
} // namespace migraph