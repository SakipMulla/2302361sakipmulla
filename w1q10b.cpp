//display factorial of a number entered (while/do while/for)

#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout<<"uing do while loop !"<<endl;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}

