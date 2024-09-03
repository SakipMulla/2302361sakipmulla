//display if a number entered is even or odd if else

#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter random number : =";
    cin>>num;

    cout << "The number " << num << " is " << (num % 2 == 0? "even" : "odd") << ".";
    //condition ? true_value : false_value

    return 0;
}
