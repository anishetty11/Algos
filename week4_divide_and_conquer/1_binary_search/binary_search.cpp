#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int64_t binary_search(const vector<int64_t> &a, int64_t x) {
  int64_t left = 0, right = (int64_t)a.size(); 
  //write your code here
  int64_t mid;
  while(left<=right)
  {
    mid=((left+right)/2);
    if (a[mid]==x)
    {
      return mid;
    }
    else if(x>a[mid])
    {
      left=mid+1;
    }
    else
    {
      right=mid-1;
    }
  }
  return -1;

}

int64_t linear_search(const vector<int64_t> &a, int64_t x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {



   int64_t n;
   std::cin >> n;
   vector<int64_t> a(n);
   for (size_t i = 0; i < a.size(); i++) {
     std::cin >> a[i];
   }
   int64_t m;
   std::cin >> m;
   vector<int64_t> b(m);
   for (int64_t i = 0; i < m; ++i) {
     std::cin >> b[i];
   }
   for (int64_t i = 0; i < m; ++i) {
     //replace with the call to binary_search when implemented
     //std::cout << linear_search(a, b[i]) << ' ';
     std::cout << binary_search(a, b[i]) << ' ';
   }
}
