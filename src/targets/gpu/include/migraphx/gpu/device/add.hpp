
#ifndef MIGRAPH_GUARD_RTGLIB_DEVICE_ADD_HPP
#define MIGRAPH_GUARD_RTGLIB_DEVICE_ADD_HPP

#include <migraphx/argument.hpp>
#include <migraphx/config.hpp>
#include <hip/hip_runtime_api.h>

namespace migraphx {
inline namespace MIGRAPH_INLINE_NS {
namespace gpu {
namespace device {

void add(hipStream_t stream, const argument& result, const argument& arg1, const argument& arg2);

void add(hipStream_t stream,
         const argument& result,
         const argument& arg1,
         const argument& arg2,
         const argument& arg3);

} // namespace device
} // namespace gpu
} // namespace MIGRAPH_INLINE_NS
} // namespace migraphx

#endif