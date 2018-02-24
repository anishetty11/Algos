#include <iostream>
#include <cassert>
#include <vector>

using namespace std;
// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is slow.
//    You may also want to submit it to the grader to ensure that it gets the "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that print64_ts the result of the naive algorithm, comment the lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and run it.
//    This will ensure that your efficient algorithm returns the same as the naive one for small values of n.
// 4. If test_solution() reveals a bug in your implementation, debug it, fix it, and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.
int64_t m;
std::vector<int64_t> v;
int64_t fibonacci_naive(int64_t n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int64_t fibonacci_fast(int64_t n) {
    // write your code here
    if (n <= 1)
        return n;
    if (v.size()>n)
        return v.at(n); 
        //cout << v.size();   

    return (fibonacci_fast(n - 1) + fibonacci_fast(n - 2))%m;
    


    return 0;
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int64_t n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int test;
    std::cin >> test;
    for(int j=0;j<test;j++)
    {
        std::vector<int64_t> rems;
        //int64_t n = 0;
        int64_t pos=0;
        //std::cin >> n;
        std::cin >> m;
        int64_t flag=0;
        //std::vector<int64_t> v;
       // v.push_back(0);
       // rems.push_back(0);
      //  if (m<2)
        //{
          //  for(int64_t i=1;i<=n;i++)
            //{
              //  v.push_back(fibonacci_fast(i));
            //}
            //std::cout << v.at(n) << '\n';
        //}
        //else
        //{
            int64_t i=1;
            while(1)
            {

                int64_t temp=fibonacci_fast(i);
                //rems.push_back(temp%m);
              //  v.push_back(temp);
                if (temp%m==0)
                    flag=1;
                if (flag==1)
                {
                    if (temp%m==1)
                    {
                      pos=i;
                        break;
                    }
                }
                if(temp%m!=0 && temp%m!=1)
                    flag=0;
                i++;

            }

       // }
        std::cout << pos << '\n';
       // int64_t offest=n%pos;

    }

    
  //  std::cout << rems.at(offest) << '\n';
    //test_solution();
    //std::cout << fibonacci_naive(n) << '\n';

    //for(int64_t i=0;i<=n;i++)
    //{
     //   cout << v.at(i);
    //}
    return 0;
}
