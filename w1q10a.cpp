//display factorial of a number entered (while/do while/for)

#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;
    
cout<<"using while loop !!"<<endl;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}
