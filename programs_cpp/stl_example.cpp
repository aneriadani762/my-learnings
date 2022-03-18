// C++ program for illustration of max(), swap() and cbrt() functions    

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=5, b=8, maximum;
    
    // maximum from a and b
    maximum=max(a, b);
    cout<<maximum<<endl;

    //swapping two values
    swap(a, b); // a=8, b=5

    cout<<a<<endl;
    cout<<b<<endl;

    //cube root of a number
    int num1 = 9; 
	cout << cbrt(num1) << endl;

    double num2 = 7.11;
	cout << cbrt(num2) << endl;

	long long num3 = 7;
	cout << cbrt(num3);

    return 0;
}
