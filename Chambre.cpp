#include "chambre.h"

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

std::string hotel::Chambre::tostring() const {
   return "numero : " + std::to_string(_numero) + "\n"
   "type : " + _type + "\n"
   "price : " + std::to_string(_price) + "\n";
}

std::ostream& hotel::operator<<(std::ostream& os,const hotel::Chambre& chambre) {
    os << chambre.tostring() <<std::endl;
    return os;
}
