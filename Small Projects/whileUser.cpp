#include <iostream>
#include <string>

using namespace std;

// Program that asks the user 10 times to enter a number and if the number is equal to the amount
// of times asked, or number of times exceeds 10 the program will exit.
int main (){

    int number;
    int counter = 0;

    while (number != counter - 1){
        cout << "Enter a number not equal to " + to_string(counter) << endl;
        cin >> number;

        if (counter == 10){
            cout << "You're more patient than I am, you win" << endl;
            exit(0);
        }
        counter++;


    }

    cout << "You werent supposed to enter " + to_string(counter) + "!" << endl;
    exit(0);


    return 0;
}