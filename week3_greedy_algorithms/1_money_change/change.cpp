#include <iostream>

int get_change(int m) {
  //write your code here
	int temp=m/10;
	if(m%10==5)
	{
		temp++;
	}
	else
	{
		if(m%10>5)
		{
			temp++;
		}
		temp+=(m%10)%5;
	}

  return temp;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
