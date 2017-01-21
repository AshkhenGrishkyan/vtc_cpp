using namespace std;
#include <iostream>
#include <climits>
#include <iomanip>
#include <cfloat>

int main()
{
   cout << setw(14) << "TYPE" << setw(25) << "MIN VALUE" << setw(25) << "MAX VALUE" << endl; 
   cout << setw(14) << "char" << setw(25) << CHAR_MIN << setw(25) << CHAR_MAX << endl;
   cout << setw(14) << "short" << setw(25) << SHRT_MIN << setw(25) << SHRT_MAX << endl;  
   cout << setw(14) << "unsigned short" << setw(25) << 0 << setw(25) << USHRT_MAX << endl;
   cout << setw(14) << "int" << setw(25) << INT_MIN << setw(25) << INT_MAX << endl;
   cout << setw(14) << "unsigned int" << setw(25) << 0 << setw(25) << UINT_MAX << endl;
   cout << setw(14) << "long" << setw(25) << LONG_MIN << setw(25) << LONG_MAX << endl;
   cout << setw(14) << "unsigned long" << setw(25) << 0 << setw(25) << ULONG_MAX << endl;
   cout << setw(14) << "float" << setw(25) << FLT_MIN << setw(25) << FLT_MAX << endl;
   cout << setw(14) << "double" << setw(25) << DBL_MIN << setw(25) << DBL_MAX << endl;
   return 0;
}