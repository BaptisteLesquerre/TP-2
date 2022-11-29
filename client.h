#include <iostream>
namespace client{
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
    };
}