#include <algorithm>
#include <iterator>

const int arr_size = 10;
some_type src[arr_size];
// ...
some_type dest[arr_size];
std::copy(std::begin(src), std::end(src), std::begin(dest));
