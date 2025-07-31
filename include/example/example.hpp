#pragma once

#include <string_view>
namespace example {

inline auto get_message() { return std::string_view{"Hello World"}; }

} // namespace example