#include <iostream>
#include <string>

#ifndef CHAMBRE_H
#define CHAMBRE_H

namespace hotel{
    class Chambre{
    private:
        int _numero;
        std::string _type;
        int _price;

    public:
        Chambre(int numero = 0, std::string type = "", int price = 0);

        int GetNumero();
        std::string GetType();
        int GetPrice();
        std::string tostring() const;
        
    };
    
    std::ostream& operator<<(std::ostream& os,const hotel::Chambre& chambre);
}

#endif // CHAMBRE_H
