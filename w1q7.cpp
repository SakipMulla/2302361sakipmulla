//display suitable message for choosing a favorite number from 1-5 switch case

#include <iostream>
using namespace std;

int main()
 {
    int num;

    cout << "Choose your favorite number from 1 to 5: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "You're a bold one! Number 1 is a great choice.";
            break;
        case 2:
            cout << "You're a peaceful soul! Number 2 is a wonderful choice.";
            break;
        case 3:
            cout << "You're a creative genius! Number 3 is an excellent choice.";
            break;
        case 4:
            cout << "You're a hard worker! Number 4 is a solid choice.";
            break;
        case 5:
            cout << "You're a free spirit! Number 5 is a fantastic choice.";
            break;
        default:
            cout << "Sorry, that's not a valid choice. Please choose a number from 1 to 5.";
            break;
    }

    return 0;
}
