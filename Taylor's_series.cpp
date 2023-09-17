#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x, a, temp, sum;
   std::cout << "Enter x: ";
   std::cin >> x ;

    int k;
    std::cout << "Enter k: ";
    std::cin >> k;

   if (x < 1 & x > -1 & k > 1) {
       a = sqrt(1 + x);

       sum = 1.0;
       temp = 1.0;
       int i;
       while (a > pow(10,-k)) {

           for (i = 1; i < 10; i++) {

               if (i % 2 == 0) {

                   temp = -1 * x * temp / (i * 2);
                   sum += temp;
               } else {
                   temp = temp * x * i / (i * 2);
                   sum += temp;
               }
               std::cout << a << '=' << sum << std::endl;
           }
       }
   }


    return 0;
}