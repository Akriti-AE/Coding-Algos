#include <iostream>
using namespace std;
int main () {
int n = 12 ;
int m = 16 ;
int r;
if ( n % m == 0 ) {
cout << "greatest gcd is" << m;
} else {
do {
r = n % m;
n = m;
m = r;
} while (n % m != 0) ;
cout << "greatest common divisor" << m;
}
