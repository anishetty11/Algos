#include <iostream>

int64_t gcd_naive(int64_t a, int64_t b) {
  int64_t current_gcd = 1;
  for (int64_t d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int64_t gcd_fast(int64_t a,int64_t b)
{
    if (a==1)
      return 1;
    if(b%a==0)
      return a;
    else
      return gcd_fast(b%a,a);
}


int main() {
  int64_t a, b;
  std::cin >> a >> b;
 // if(a<b)
  //  std::cout << gcd_naive(a, b) << std::endl;
  //else
    //std::cout << gcd_naive(b, a) << std::endl;

  if(a<b)
    std::cout << a*b/gcd_fast(a, b) << std::endl;
  else
    std::cout << a*b/gcd_fast(b, a) << std::endl;
  return 0;
}
