#include <iostream>
#include <vector>

namespace hotel{
        class Hotel {
            private:
                std::string _idhotel;
                std::string _nom;
                std::string _ville;
                std::vector<hotel::Chambre> _tabchambres;
            public:
                Hotel(std::string idhotel, std::string nom, std::string ville, std::vector<hotel::Chambre> tabchambres);
                std::string idhotel() const;
                std::string nom() const;
                std::string ville() const;
                std::vector<hotel::Chambre> tabchambre() const;
                void update_idhotel(std::string idhotel);
                void update_nom(std::string nom);
                void update_ville(std::string ville);
        }
}
