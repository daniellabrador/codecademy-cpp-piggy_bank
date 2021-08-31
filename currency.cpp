#include <iostream>

int main() {
  
  double pesos, reais, soles, dollars;

  std::cout<<"Enter number of Colombian Pesos: "; std::cin>>pesos;
  std::cout<<"Enter number of Brazilian Reais: "; std::cin>>reais;
  std::cout<<"Enter number of Peruvian Soles: "; std::cin>>soles;
  
  // COPUSD = 0.00026
  // BRLUSD = 0.19
  // PENUSD = 0.25
  dollars = (pesos * 0.00026) + (reais * 0.19) + (soles * 0.25);

  std::cout<<"US Dollars = $"<<dollars<<"\n";
}