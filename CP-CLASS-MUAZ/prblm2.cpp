#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter your Number: ";
    cin >> num;

 
    if (num%2==0) {
        cout << num <<" is Even" << endl;
    }

    else {
        cout << num <<" Is Odd" << endl;
    }


    return 0;
}