#include <iostream>
#include <string>

using namespace std;
int main(){
    string name = "neurot";

    string& reference = name;

    reference = "isaaaiki";


    cout << "enter the new name: ";

    cin >> reference;



    cout << reference;

}