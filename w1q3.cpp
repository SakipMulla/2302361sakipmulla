
// calculate sum and average of two number inputted

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, avg, sum;
   

    cout<<"ENTER YOURE 1ST NUMBER :";
    cin>>num1;

    cout<<"ENTER YOURE 2ND NUMBER :";
    cin>>num2;
     
     sum=num1+num2;
    avg=sum/2;

    cout<<"TOTAL SUM ="<<sum<<"\n";
    cout<<"AVERAGE OF TWO NUMBER ="<<avg;

    return 0;
}
