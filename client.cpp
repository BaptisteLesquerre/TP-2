#include <iostream>
#include "client.h"

client::Client::Client(std::string idclient, std::string nom, std::string prenom):_idclient(idclient),_nom(nom),_prenom(prenom){
}

std::string client::Client::idclient() const {
    return _idclient;
}

std::string client::Client::nom() const {
    return _nom;
}

std::string client::Client::prenom() const {
    return _prenom;
}

void client::Client::update_idclient(std::string idclient){
    _idclient = idclient;
}

void client::Client::update_nom(std::string nom){
    _nom = nom;
}

void client::Client::update_prenom(std::string prenom){
    _prenom = prenom;
}