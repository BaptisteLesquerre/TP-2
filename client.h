#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <vector>
    class Client {
        private:
        std::string _idclient;
        std::string _nom;
        std::string _prenom;
        public :
        Client(std::string idclient, std::string nom, std::string prenom);
        std::string idclient() const;
        std::string nom() const;
        std::string prenom() const;
        void update_idclient(std::string idclient);
        void update_nom(std::string nom);
        void update_prenom(std::string prenom);
        std::string tostring() const;
        std::string display(std::vector<Client> c1);
    };
    std::ostream& operator<<(std::ostream& os,const Client& client);
    std::string saisi_client(std::vector<Client>& cl);
#endif \\CLIENT_H
