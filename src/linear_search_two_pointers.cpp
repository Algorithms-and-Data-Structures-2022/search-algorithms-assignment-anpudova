#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int index_left = 0;
    int index_right = static_cast<int>(arr.size()) - 1;
    while (index_left <= index_right) {
      if (arr[index_left] == search_elem) {
        return index_left;
      } else if (arr[index_right] == search_elem) {
        return index_right;
      }
      index_left++;
      index_right--;
    }
  }

}  // namespace assignment