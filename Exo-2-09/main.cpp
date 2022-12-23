#include <iostream>
#include <climits>
using namespace std;

int main() {

   char c = 'A';
   int n = 7;
   int a = -2;
   unsigned b = 1;
   long p = 10;
   float x = 1.25f;
   double z = 5.5;

   cout << n + c + p << endl;
   cout << 2 * x + c << endl;
   cout << (char) n + c << endl;
   cout << (float) z + n / 2 << endl;
   cout << a + b << endl;
   cout << UINT_MAX << endl;
   
   return 0;
}
