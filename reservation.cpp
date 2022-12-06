#include "reservation.h"

#include<iostream>

reservation::reservation(date::Date nuit_debut, int nb_nuit, std::string id_hotel, int numero_chambre, std::string id_client, int montant)
{
    _nuit_debut = nuit_debut;
    _nb_nuits = nb_nuit;
    _id_hotel = id_hotel;
    _numero_chambre = numero_chambre;
    _id_client = id_client;
    _montant = montant;

}

date::Date reservation::GetNuitDebut()
{
    return _nuit_debut;
}

int reservation::GetNbNuits()
{
    return _nb_nuits;
}

int reservation::GetNumeroChambre()
{
    return _numero_chambre;
}

int reservation::GetMontant()
{
    return _montant;
}

std::string reservation::GetIdHotel()
{
    return _id_hotel;
}

std::string reservation::GetIdClient()
{
    return _id_client;
}


void reservation::SetNuitDebut(date::Date nuit_debut)
{
    _nuit_debut = nuit_debut;
}

void reservation::SetNbNuits(int nb_nuits)
{
    _nb_nuits = nb_nuits;
}

void reservation::SetNumeroChambre(int numero_chambre)
{
    _numero_chambre = numero_chambre;
}

void reservation::SetMontant(int montant)
{
    _montant = montant;
}

void reservation::SetIdHotel(std::string id_hotel)
{
    _id_hotel = id_hotel;
}

void reservation::SetIdClient(std::string id_client)
{
    _id_client = id_client;
}
