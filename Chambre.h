#include <iostream>
#include <string>


class Chambre{
private:
    int _numero;
    std::string _type;
    int _price;

public:
    Chambre(int numero = 0, std::string type = "", int price = 0);

    int GetNumero();
    std::string GetType();
    int GetPrice();
};