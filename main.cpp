#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        int year;
        double gpa;
        bool enrolled;
};

class Restaurant{
    
    public:
        string name;
        string category;
        double rating;
        string price;
        bool delivery;
};



int main(){
  Restaurant peter_luger;
  Restaurant katz;

  peter_luger.name = "Peter Luger Steak House";
  peter_luger.category = "American";
  peter_luger.rating = 4.4;
  peter_luger.price = "$$$$";
  peter_luger.delivery = false;

  katz.name = "Katz's Delicatessen";
  katz.category = "Deli";
  katz.rating = 4.5;
  katz.price = "$$";
  katz.delivery = false;


}