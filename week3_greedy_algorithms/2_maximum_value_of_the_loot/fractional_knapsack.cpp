#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;


double get_optimal_value(int64_t n,int64_t capacity, vector<int64_t> weights, vector<int64_t> values) {
  double value = 0.0;

  vector<int64_t> ratio(n);

  for (int64_t i = 0; i < n; i++) {
    ratio[i]=values[i]/weights[i];
  }

  std::sort(ratio,ratio+n);

  for (int64_t i = 0; i < n; i++) {
    std::cout << ratio[i];
  }


  return value;
}

int main() {
  int64_t n;
  int64_t capacity;
  std::cin >> n >> capacity;
  vector<int64_t> values(n);
  vector<int64_t> weights(n);
  for (int64_t i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(n,capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
