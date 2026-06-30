#include <iostream>
#include <vector>

int main() {
  // Write code here 💖
  std::vector<std::string> cart = {"Pepperoni pizza", "Garden salad", "Diet coke"}; 
  
  
  cart.push_back("Marinara sauce");

  cart.pop_back();

  std::cout << cart.size();
}