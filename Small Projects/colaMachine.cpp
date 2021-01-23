#include <iostream>
#include <string>
using namespace std;

int main(){

    int drink;

    cout << "Enter a Number corresponding with a Beverage: " << endl << "Coke: 1, Water: 2, Sprite: 3, Pepsi: 4, Iced Tea: 5" << endl;
    cin >> drink;

    switch(drink){
        case 1: printf("Coke\n");
            break;
        case 2: printf("Water\n");
            break;
        case 3: printf("Sprite\n");
            break;
        case 4: printf("Pepsi\n");
            break;
        case 5: printf("Iced Tea\n");
            break;
        default: printf("Error, choice was not valid, here is your money back\n");
            break;
    }

    return 0;
}
