#include "date.h"
#include "hotel.h"
#include "client.h"
#include<iostream>
#include<string>

#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation
{
private:
    Date _nuit_debut;
    int _nb_nuits;
    int _numero_chambre;
    int _montant;
    std::string _id_hotel;
    std::string _id_reservation;
    std::string _id_client;

public:
    Reservation(std::string id_reservation,Date nuit_debut= Date (1,1,2023), int nb_nuit =0, std::string id_hotel = "", int numero_chambre =0, std::string id_client ="", int montant=0);

    Date getNuitDebut();
    int getNbNuits();
    int getNumeroChambre();
    int getMontant();
    std::string getIdHotel();
    std::string getIdClient();
    std::string getid_reservation();

    void setNuitDebut(Date nuit_debut);
    void setNbNuits(int nb_nuits);
    void setNumeroChambre(int numero_chambre);
    void setMontant(int montant);
    void setIdHotel(std::string id_hotel);
    void setIdClient(std::string id_client);
    std::string tostring() const;
    
};

//helper pour afficher des réservations....................................................................................
bool display_reservation_clientid(std::vector<Reservation> rtab, std::string client);
void display_reservation_client(std::string a, std::vector<Reservation> rtab );
void display_reservation(std::vector<Reservation> rtab);
void display(std::vector<Reservation> reservationtab);
std::ostream& operator<<(std::ostream& os,const Reservation& reservation);

//helper pour enregistrer/crée des réservations............................................................................
void reservation_creator(hotel::Hotel h1,std::vector<Client> tab_client, std::vector<Reservation> rtab);
std::string delete_reservation(std::vector<Reservation>& rtab);
std::string modif_reservation(std::vector<Reservation>& rtab,hotel::Hotel h1);
void saisi_reservation1(std::vector<Reservation>& reservationtab,Reservation& r,hotel::Hotel h1,std::string idclient);
void saisi_reservation2(std::vector<Reservation>& reservationtab,Reservation& r,hotel::Hotel h1,std::string idclient);

//autres helpers.............................................................................................................
int calcul_montant(int idchambre, hotel::Hotel h1, int nbdenuits);
bool creneau_valide(Reservation r,std::vector<int>& chambre_dispo,std::vector<Reservation>& reservationtab,Date datebegin,int nbdenuits);
bool search_chambre(int nbdenuits, std::string typechambre, Reservation& r, std::vector<int>& chambre_dispo, hotel::Hotel h1);
void chambre_libre(std::vector<int>& chambre_dispo,std::vector<Reservation>& rtab,hotel::Hotel h1);

#endif // RESERVATION_H
