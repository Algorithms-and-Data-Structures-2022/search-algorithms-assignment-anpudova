#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    int index_left = 0;
    int index_right = arr.size() - 1;
    int index_middle;
    while (index_left <= index_right) {
      index_middle = (index_right + index_left) / 2;
      if (search_elem == arr[index_middle]) {
        return index_middle;
      } else if (search_elem < arr[index_middle]) {
        index_right = index_middle - 1;
      } else {
        index_left = index_middle + 1;
      }
    }
    return std::nullopt;
  }
}  // namespace assignment