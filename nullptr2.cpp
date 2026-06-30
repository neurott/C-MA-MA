#include <iostream>
#include <string>

using namespace std;

void reviewAction(const string& name, const string* extraComment){


    if(extraComment != nullptr){
        cout << "Thank for the review " << name;
    }
    else{
        cout << "THANKS FOR THE REVIEW";

    }

}

int main(){

    string name = "Jose";
    string extraComment = "GOOD FOOD, THX";

    reviewAction(name, nullptr);
}