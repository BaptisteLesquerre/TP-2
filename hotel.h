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
                Hotel(std::string idhotel, std::string nom, std::string ville, std::vector<hotel::Chambre> tabchambre);
                std::string idhotel() const;
                std::string nom() const;
                std::string ville() const;
                std::vector<hotel::Chambre> tabchambre() const;
                void update_idhotel(std::string idhotel);
                void update_nom(std::string nom);
                void update_ville(std::string ville);
                std::string tostring() const;
        };
        std::ostream& operator<<(std::ostream& os,const hotel::Hotel& hotel);
}   
