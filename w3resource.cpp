// https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
// C++ Basic: Exercises, Practice, Solution

/*
1. Write a program in C++ to print a welcome text in a separate line.
*/
#include<iostream>
using namespace std;

int main()
{
    cout<<"Write a program in C++ to print a welcome text in a separate line.";
    return 0;
}

/*
2. Write a program in C++ to print the sum of two numbers.
*/
#include<iostream>
using namespace std;

int main()
{
    cout<<" Print the sum of two numbers :\n";
    cout<<"-------------------------------\n";
    cout<<" The sum of 29 and 30 is : " << 29 + 30;
    return 0;
}

/*
3. Write a program in C++ to find Size of fundamental data types.
*/
#include<iostream>
using namespace std;

int main()
{
    cout << "The sizeof(char) is : " << sizeof(char) << " bytes\n";
    cout << "The sizeof(short) is : " << sizeof(short) << " bytes\n";
    cout << "The sizeof(int) is : " << sizeof(int) << " bytes\n";
    cout << "The sizeof(long) is : " << sizeof(long) << " bytes\n";
    cout << "The sizeof(long long) is : " << sizeof(long long) << " bytes\n";
    cout << "The sizeof(float) is : " << sizeof(float) << " bytes\n";
    cout << "The sizeof(double) is : " << sizeof(double) << " bytes\n";
    cout << "The sizeof(long double) is : " << sizeof(long double) << " bytes\n";
    cout << "The sizeof(bool) is : " << sizeof(bool) << " bytes\n";
    return 0;
}

/*
4. Write a program in C++ to print the sum of two numbers using variables.
*/
#include<iostream>
using namespace std;

int x = 29;
int y = 30;

int main()
{
    cout<<" Print the sum of two numbers :\n";
    cout<<"-------------------------------\n";
    cout<<" The sum of 29 and 30 is : " << x + y;
    return 0;
}

/*
5. Write a program in C++ to check the upper and lower limits of integer.
*/
#include <iostream>
#include <climits>   // integer limits in header file
using namespace std;
 
int main() 
{
    cout << "\n\n Check the upper and lower limits of integer :\n";
	cout << "--------------------------------------------------\n";
	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
	cout << " The minimum limit of long long data type :            " << LLONG_MIN << endl;
	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
    cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
    cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;
   cout << endl;
   return 0;
}
