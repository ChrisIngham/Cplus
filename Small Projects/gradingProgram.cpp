#include <iostream>
#include <string>
using namespace std;

string grade_Calculator(int grade){
    if (grade == 100){
        return "You got a perfect score! ";
    }else if (grade >= 90){
        return "You scored an A! ";
    }else if (grade >= 80){
        return "You scored a B! ";
    }else if (grade >= 70){
        return "You scored a C! ";
    }else if (grade >= 60){
        return "You scored a D! ";
    }else{
        return "You Failed :( ";
    }
}

int main(){

    int grade = 0;
    cout << "Please enter programming class grade: " << endl;
    cin >> grade;

    string outcome = "";
    outcome = grade_Calculator(grade);

    cout << outcome << endl;
    return 0;
}

