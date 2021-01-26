#include <iostream>
#include <string>

using namespace std;

int main(){

    int person[10] = {0,0,0,0,0,0,0,0,0,0};
    int counter = 0;
    int most_pancake = 0;
    int index_of_most = 0;

    while (counter <= 9){

        cout << "Enter amount of pancakes ate by person " + to_string(counter + 1) << endl;
        cin >> person[counter];

        counter++;
    }

    for (int i = 0; i < sizeof(person); i++){
        if (person[i] > most_pancake){
            most_pancake = int(person[i]);
            index_of_most = i;
        }
    }

    cout << "Person " + to_string(index_of_most) + " ate the most pancakes!" << endl;

    return 0;
}