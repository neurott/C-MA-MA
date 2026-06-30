#include <iostream>
#include <string>

using namespace std;

class WealthyFamily{
    public:
        string name;
        int networth;
};



int main(){
    WealthyFamily porotos;

    porotos.name = "KARDASHINAS";
    porotos.networth = 2313213;

    cout << porotos.name << ":\n" << "We are worth $" << porotos.networth; 
       

}