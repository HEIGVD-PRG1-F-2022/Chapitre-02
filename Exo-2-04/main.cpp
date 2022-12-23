#include <cstdlib>
#include <iostream>
#include <limits>
using namespace std;

int main() {

   cout << "signed char (" << numeric_limits<signed char>::digits + 1 << " bits) : "   
        << (int) numeric_limits<signed char>::lowest() << " .. "
        << (int) numeric_limits<signed char>::max() << endl;

   cout << "short (" << numeric_limits<short>::digits + 1 << " bits) : "
        << numeric_limits<short>::lowest() << " .. "
        << numeric_limits<short>::max() << endl;

   cout << "int (" << numeric_limits<int>::digits + 1 << " bits) : "
        << numeric_limits<int>::lowest() << " .. "
        << numeric_limits<int>::max() << endl;

   cout << "long (" << numeric_limits<long>::digits + 1 << " bits) : "
        << numeric_limits<long>::lowest() << " .. "
        << numeric_limits<long>::max() << endl;

   cout << "long long (" << numeric_limits<long long>::digits + 1 << " bits) : "
        << numeric_limits<long long>::lowest() << " .. "
        << numeric_limits<long long>::max() << endl;

//    cout << "unsigned int (" << numeric_limits<unsigned int>::digits << " bits) : "
//         << numeric_limits<unsigned int>::lowest() << " .. "
//         << numeric_limits<unsigned int>::max() << endl;

   return EXIT_SUCCESS;
}

// signed char (8 bits) : -128 .. 127
// short (16 bits) : -32768 .. 32767
// int (32 bits) : -2147483648 .. 2147483647
// long (32 bits) : -2147483648 .. 2147483647
// long long (64 bits) : -9223372036854775808 .. 9223372036854775807
