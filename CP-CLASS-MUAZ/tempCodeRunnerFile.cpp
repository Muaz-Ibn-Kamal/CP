#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter your Number: ";
    cin >> num;
    if ((num&1)==0&&num>10&&num<50)
    {
       cout<<"Valid"<<endl;
    }
    else{
        cout<<"Non-Valid"<<endl;
    }
    



}