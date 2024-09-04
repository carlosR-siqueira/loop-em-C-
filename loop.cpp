#include <iostream>

int main() {
  
    int indice = 12;
    int soma = 0;


    for (int k = 1; k < indice; ++k) {
        soma += k + 1; 
    }

    std::cout << soma << std::endl;

    return 0;
}
