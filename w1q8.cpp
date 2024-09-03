//display entered digit in word switch case

#include <iostream>
using namespace std;

int main()
 {
    int digit;
    cout<<"converting numbers to words !!"<<endl;
    cout << "enter single digit number from 0 to 9: =";
    cin >> digit;

   switch (digit)
   {
   case 0:
   cout<<"zero";
    break;
    case 1:
    cout<<"one";
    break;
    case 2:
    cout<<"two";
    break;
    case 3:
    cout<<"three";
    break;
    case 4:
    cout<<"four";
    break;
    case 5:
    cout<<"five";
    break;
    case 6:
    cout<<"ix";
    break;
    case 7:
    cout<<"seven";
    break;
    case 8:
    cout<<"eight";
    break;
    case 9:
    cout<<"nine";
    default:
    cout << "Invalid input. Please enter a single digit (0-9).";
    break;
   }

    return 0;
}
