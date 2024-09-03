//display factorial of a number entered (while/do while/for)

#include <iostream>
using namespace std;

int main() 
{
    int num;
    long long factorial = 1;

    cout<<"using for loop !!"<<endl;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) 
    {
        factorial *= i;
    }

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}
