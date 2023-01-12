#ifndef HOTEL_H
#define HOTEL_H
#include <iostream>
#include <vector>
#include "chambre.h"

namespace hotel{
        class Hotel {
            private:
                std::string _idhotel;
                std::string _nom;
                std::string _ville;
                std::vector<hotel::Chambre> _tabchambre;
                 

            public:
                Hotel(std::string idhotel, std::string nom, std::string ville);
                std::string idhotel() const;
                std::string nom() const;
                std::string ville() const;
                std::vector<hotel::Chambre> tabchambre() const;
                void update_idhotel(std::string idhotel);
                void update_nom(std::string nom);
                void update_ville(std::string ville);
                std::string tostring() const;
                void cch(int nb,std::string b,int prix,int et);
        };
        std::ostream& operator<<(std::ostream& os,const Hotel& hotel);
       
}   
#endif \\HOTEL_H
