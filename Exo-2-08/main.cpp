#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   cout << fixed << setprecision(0); 

   cout << "1)" << 3 * 1000 * 1000 * 1000 << endl;
   cout << "2)" << 3.0 * 1000 * 1000 * 1000 << endl;
   cout << "3)" << 100000 * 100000 * 100000.0 << endl;
   cout << "4)" << 100000.0 * 100000 * 100000 << endl;   
   cout << "5)" << 1E7 + 1.0 << endl;
   cout << "6)" << 1E7f + 1.f << endl;
   cout << "7)" << 1E8 + 1.0 << endl;
   cout << "8)" << 1E8f + 1.f << endl;
   
//    float  x1 = 1.0000001f;
//    double x2 = 1.0000001;
//    float  x3 = 1.00000001f;
//    double x4 = 1.00000001;
//    
//    float  y1 = 1E7f;
//    double y2 = 1E7;
//    float  y3 = 1E8f;
//    double y4 = 1E8;
// 
//    cout << fixed << setprecision(20);
//    cout << "x1 = " << x1 << endl;
//    cout << "x2 = " << x2 << endl;
//    cout << "x3 = " << x3 << endl;
//    cout << "x4 = " << x4 << endl;
//    
//    cout << fixed << setprecision(7);
//    cout << "x1 = " << x1 << endl;
//    cout << "x2 = " << x2 << endl;
//    cout << fixed << setprecision(8);
//    cout << "x3 = " << x3 << endl;
//    cout << "x4 = " << x4 << endl;
// 
//    cout << fixed << setprecision(0);
//    cout << "res1 = " << x1 * y1 << endl;
//    cout << "res2 = " << x2 * y2 << endl;
//    cout << "res3 = " << x3 * y3 << endl;
//    cout << "res4 = " << x4 * y4 << endl;
// 
//    float x5  = 1.00000009f;
//    double x6 = 1.00000009;
//    float y5 = 1E8f;
//    float y6 = 1E8;
// 
//    cout << fixed << setprecision(20);
//    cout << "x5 = " << x5 << endl;
//    cout << "x6 = " << x6 << endl;
// 
//    cout << fixed << setprecision(8);
//    cout << "x5 = " << x5 << endl;
//    cout << "x6 = " << x6 << endl;
//    cout << fixed << setprecision(0);
//    cout << "res5 = " << x5 * y5 << endl;
//    cout << "res6 = " << x6 * y6 << endl;
   
   return EXIT_SUCCESS;
}

// x1 = 1.0000001|1920928955078
// x2 = 1.0000001|0000000005839
// x3 = 1.00000000|000000000000
// x4 = 1.00000000|999999993923
// x1 = 1.0000001
// x2 = 1.0000001
// x3 = 1.00000000 << oups!
// x4 = 1.00000001
// res1 = 10000001
// res2 = 10000001
// res3 = 100000000 <<< oups!
// res4 = 100000001
// x5 = 1.00000011|920928955078
// x6 = 1.00000008|999999989712
// x5 = 1.00000012 << oups!
// x6 = 1.00000009
// res5 = 100000008 <<< oups!
// res6 = 100000009
// 