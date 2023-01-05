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
    return "idclient : " + _idclient  + " | " + "nom : " + _nom + " | " +"prenom : " + _prenom;
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

std::string saisi_client(std::vector<Client>& cl){
    std::string nom_client;
    bool exist = false;
    std::cout <<"Saisisez le nom d'un client"<<std::endl;
	std::cin >> nom_client;
	
    for(int i=0; i< cl.size(); i += 1){
		if (cl.at(i).nom() == nom_client){
            exist = true;
			std::cout << cl.at(i) << std::endl;
            return cl.at(i).idclient();
		}		
	} 

	if (exist == false){
        std::cout<< "client non dans la liste"<<std::endl;
        std::cout<< "ajout du client"<<std::endl;

        std::string prenom_client;
        std::string id_client;
        std::cout <<"Saisisez le prénom du client"<<std::endl;
        std::cin >> prenom_client;
        std::cout <<"Saisisez l'id du client"<<std::endl;
        std::cin >> id_client;

        cl.push_back(Client (id_client,nom_client,prenom_client));
        std::cout<<cl.at(cl.size()-1)<<std::endl;

        return cl.at(cl.size()-1).idclient();
	}
	
}
