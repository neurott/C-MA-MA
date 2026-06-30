#include <iostream>
#include <string>
using namespace std;

    void greet(const string* name){
        if(name != nullptr){
            cout << "HELLO " << name << "!\n";

        }else{
            cout << "Hello, guest!\n";
        } 
    }

int main(){


    string user = "Marcos";

    greet(&user); //le tiramos esto q es como un address-of, pq el parametro es un string pointer
    greet(nullptr);


}