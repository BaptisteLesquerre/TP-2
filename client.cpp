#include <iostream>
#include "client.h"

Client::Client(std::string idclient, std::string nom, std::string prenom):_idclient(idclient),_nom(nom),_prenom(prenom){
}

std::string Client::idclient() const {
    return _idclient;
}

std::string Client::nom() const {
    return _nom;
}

std::string Client::prenom() const {
    return _prenom;
}

void Client::update_idclient(std::string idclient){
    _idclient = idclient;
}

void Client::update_nom(std::string nom){
    _nom = nom;
}

void Client::update_prenom(std::string prenom){
    _prenom = prenom;
}

std::string Client::tostring() const {
    return "idclient : " + _idclient + " | " + "nom : " + _nom + " | " +"prenom : " + _prenom;
}

std::string Client::display(std::vector<Client> c1){
    std::string c ="|";
    for (int i = 0; i < c1.size(); i++){
        c = c + c1[i].tostring() + "|";
    }
    return c;
}

std::ostream& operator<<(std::ostream& os,const Client& client){
        os << client.tostring() <<std::endl;
        return os;
    }
