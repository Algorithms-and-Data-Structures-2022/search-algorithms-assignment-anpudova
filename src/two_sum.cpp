#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int index_left = 0;
    int index_right = arr.size() - 1;

    while (index_left <= index_right) {
      if (arr[index_left] + arr[index_right] == sum) {
        return std::make_pair(index_left, index_right);
      } else if (arr[index_left] + arr[index_right] < sum) {
        index_left++;
      } else if (arr[index_left] + arr[index_right] > sum){
        index_right--;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment