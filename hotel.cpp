#include <iostream>
#include "hotel.h"
#include <vector>

namespace hotel {
    hotel::Hotel::Hotel(std::string idhotel, std::string nom, std::string ville):_idhotel(idhotel),_nom(nom),_ville(ville){
    }

    std::string hotel::Hotel::idhotel() const {
        return _idhotel;
    }

    std::string hotel::Hotel::nom() const {
        return _nom;
    }

    std::vector<hotel::Chambre> hotel::Hotel::tabchambre() const {
        return _tabchambre;
    }

    std::string hotel::Hotel::ville() const {
        return _ville;
    }

    void hotel::Hotel::update_idhotel(std::string idhotel){
        _idhotel = idhotel;
    }

    void hotel::Hotel::update_nom(std::string nom){
        _nom = nom;
    }

    void hotel::Hotel::update_ville(std::string ville){
        _ville = ville;
    }

    std::string hotel::Hotel::tostring() const {
    std::string tc ="|";
    for (int i = 0; i < _tabchambre.size(); i++){
        tc=tc + _tabchambre[i].tostring() + "|";
    }
    return "idhotel : " + _idhotel + "\n"
    "nom : " + _nom + "\n"
    "ville : " + _ville + "\n"
    "tabchambre :" + tc ;
    }

    std::ostream& operator<<(std::ostream& os,const Hotel& hotel){
        os << hotel.tostring() <<std::endl;
        return os;
    }

    void hotel::Hotel::cch(int nb,std::string b,int prix,int et){
        for (int i = 0; i < nb; i++){
            int room = i + et;
            _tabchambre.push_back(Chambre(room, b, prix));
        }		      
    }
}
