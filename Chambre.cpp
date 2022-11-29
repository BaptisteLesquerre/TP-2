#include "Chambre.h"

#include <iostream>
#include <string>

Chambre::Chambre(int numero, std::string type, int price){
    _numero = numero;
    _type = type;
    _price = price;
}

int Chambre::GetNumero(){
    return _numero;
}

std::string GetType(){
    return _type;
}

int GetPrice(){
    return _price;
}

