#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int index_left = 0;
    int index_right = static_cast<int>(data.size()) - 1;

    while (index_left <= index_right) {
      if (data[index_left] + data[index_right] == sum) {
        return std::make_pair(index_left, index_right);
      } else if (data[index_left] + data[index_right] < sum) {
        index_left++;
      } else {
        index_right--;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment