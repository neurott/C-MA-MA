#include <iostream>

using namespace std;

class BankAccount{
    public:
    string name;
    int account_id;
    string account_type;
    double balance; // plata que ya tengo

    double deposit(double x){
        return balance += x;
    }

    double withdraw(double x){
        return balance -= x;
    }

    void display_balance(){
        cout << "PLATA ACTUAL:" << balance;
    }

};


int main(){

    BankAccount cuentita;
    
    cuentita.name = "DEBITO";
    cuentita.account_id = 213941;
    cuentita.account_type = "CHECKINGS";
    cuentita.balance = 400000;

    cuentita.deposit(30000);
    cuentita.withdraw(10000);
    cuentita.display_balance();


}