#include "Chambre.h"

#include <iostream>
#include <string>

hotel::Chambre::Chambre(int numero, std::string type, int price){
    _numero = numero;
    _type = type;
    _price = price;
}

int hotel::Chambre::GetNumero(){
    return _numero;
}

std::string hotel::Chambre::GetType(){
    return _type;
}

int hotel::Chambre::GetPrice(){
    return _price;
}

