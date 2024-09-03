//display largest of two number inputted (if else) 

#include<iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout<<"enter the first number : =";
    cin>>num1;
    cout<<"enter the second number : =";
    cin>>num2;

    if(num1>num2)
    {
        cout<<"first number is greater, that is "<< num1;
    } else
    {
        cout<<"second number is greater, that is "<< num2;
    }

    return 0;

}
