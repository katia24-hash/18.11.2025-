#include <vector>

template <typename T>
void Duplicate(std::vector<T>& v) {
    v.insert(v.end(), v.begin(), v.end());
}