#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

 
    if (age >= 0 && age <= 13) {
        cout << "You are a Child." << endl;
    }
    else if (age >= 13 && age <= 19) {
        cout << "You are a Teenager." << endl;
    }
    else {
        cout << "You are an Adult." << endl;
    }


    return 0;
}
