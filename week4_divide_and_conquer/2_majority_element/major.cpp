#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;


int one,two;
int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  int count=0;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      if (a[i]==x)
        count++;
      j++;
      swap(a[i], a[j]);
    }
  }
  swap(a[l], a[j]);
  one=j;

  int k = l;
  for (int i = l + 1; i <= j; i++) {
    if (a[i] < x) {
      k++;
      swap(a[i], a[k]);
    }
  }

  two=k;
}

int partition3(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      j++;
      swap(a[i], a[j]);
    }
  }
  swap(a[l], a[j]);
  return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  partition2(a, l, r);

  randomized_quick_sort(a, l, two);
  randomized_quick_sort(a, one, r);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  int temp=a[0];
  int count=0;
  for (size_t i = 0; i < a.size(); ++i) {
    if(a[i]==temp)
    {
    	count++;
    }
    else
    {
    	temp=a[i];
    	count=1;
    }
    if(count>n/2)
    {
    	std::cout << 1;
    	return 1;
    }
  }
  std::cout << 0;
}
