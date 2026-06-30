#include <iostream>
using namespace std;

// le pido al useru porcentaje
int tips_menu(){
    int percentage;
    cout << "LEAVE A TIP?: ";
    cin >> percentage;

    try{

        if(percentage<0){
            throw "la propina tiene qsaer mayor a 0 porque yo quiero";
        }

        return percentage;

    }catch(const char* error){
        cout << error << "\n";
        return 0;

    }


}
// con dolares
double tips_calculator(int porcentaje, double cuenta){
    double total;
    double propina;
    propina = (porcentaje * cuenta) / 100;
    total = cuenta + propina;
    return total;
}


int main(){

    int porcentaje = tips_menu();
    double cuenta;

    try{
        cout << "CUANTO COBRAMOS?: ";
        cin >> cuenta;

        if(cuenta < 0){
            throw "LA CUENTA NO PEUDE SER MENOR A 0";
        }

        cout << "\nES " << "$" << tips_calculator(porcentaje, cuenta);
            
    }catch(const char* error){
        cout << error << "\n";

    }




}