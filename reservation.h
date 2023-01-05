#include "date.h"

#include<iostream>
#include<string>


class reservation
{
private:
    date::Date _nuit_debut;
    int _nb_nuits;
    int _numero_chambre;
    int _montant;
    std::string _id_hotel;
    std::string _id_client;

public:
    reservation(date::Date nuit_debut, int nb_nuit, std::string id_hotel, int numero_chambre, std::string id_client, int montant);

    date::Date GetNuitDebut();
    int GetNbNuits();
    int GetNumeroChambre();
    int GetMontant();
    std::string GetIdHotel();
    std::string GetIdClient();

    void SetNuitDebut(date::Date nuit_debut);
    void SetNbNuits(int nb_nuits);
    void SetNumeroChambre(int numero_chambre);
    void SetMontant(int montant);
    void SetIdHotel(std::string id_hotel);
    void SetIdClient(std::string id_client);
};
