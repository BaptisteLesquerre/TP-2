#include "date.h"
#include "hotel.h"
#include<iostream>
#include<string>


class Reservation
{
private:
    Date _nuit_debut;
    int _nb_nuits;
    int _numero_chambre;
    int _montant;
    std::string _id_hotel;
    std::string _id_client;

public:
    Reservation(Date nuit_debut, int nb_nuit =0, std::string id_hotel = "", int numero_chambre =0, std::string id_client ="", int montant=0);

    Date getNuitDebut();
    int getNbNuits();
    int getNumeroChambre();
    int getMontant();
    std::string getIdHotel();
    std::string getIdClient();

    void setNuitDebut(Date nuit_debut);
    void setNbNuits(int nb_nuits);
    void setNumeroChambre(int numero_chambre);
    void setMontant(int montant);
    void setIdHotel(std::string id_hotel);
    void setIdClient(std::string id_client);
};

void saisi_reservation(std::vector<Reservation>& reservationtab,Reservation& r,hotel::Hotel h1,std::string idclient);
bool rempty(std::vector<Reservation>& reservationtab, hotel::Hotel h1);
