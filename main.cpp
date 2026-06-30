#include <iostream>

int main(){

    std::string password;

    std::cout << "OYE INGRESA TU CONTRASEÑA: ";

    std::cin >> password;

    bool tieneNumero = false;
    bool tieneEspecial = false;

    //verificamos si tiene un número
    if(password.length() >= 8){
        for(char c : password){
            if(isdigit(c)){
                tieneNumero = true;
            }
            if(c== '!' || c=='@' || c== '#' || c== '%' || c== '^'){
                tieneEspecial = true;
            }
        }

        if(tieneNumero && tieneEspecial){
            std::cout<<"PASSWORD VALID";
        }
        else{
            std::cout << "LE FALTA DE TODO PO WN";
        }

    }

    

    else{
        std::cout << "PASSWORD INVALID";
    }    


}
