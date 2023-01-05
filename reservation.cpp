#include "reservation.h"
#include "date.h"
#include "hotel.h"
#include<iostream>

Reservation::Reservation(Date nuit_debut, int nb_nuit, std::string id_hotel, int numero_chambre, std::string id_client, int montant)
{
    _nuit_debut = nuit_debut;
    _nb_nuits = nb_nuit;
    _id_hotel = id_hotel;
    _numero_chambre = numero_chambre;
    _id_client = id_client;
    _montant = montant;

}

Date Reservation::getNuitDebut()
{
    return _nuit_debut;
}

int Reservation::getNbNuits()
{
    return _nb_nuits;
}

int Reservation::getNumeroChambre()
{
    return _numero_chambre;
}

int Reservation::getMontant()
{
    return _montant;
}

std::string Reservation::getIdHotel()
{
    return _id_hotel;
}

std::string Reservation::getIdClient()
{
    return _id_client;
}


void Reservation::setNuitDebut(Date nuit_debut)
{
    _nuit_debut = nuit_debut;
}

void Reservation::setNbNuits(int nb_nuits)
{
    _nb_nuits = nb_nuits;
}

void Reservation::setNumeroChambre(int numero_chambre)
{
    _numero_chambre = numero_chambre;
}

void Reservation::setMontant(int montant)
{
    _montant = montant;
}

void Reservation::setIdHotel(std::string id_hotel)
{
    _id_hotel = id_hotel;
}

void Reservation::setIdClient(std::string id_client)
{
    _id_client = id_client;
}

bool rempty(std::vector<Reservation>& reservationtab, hotel::Hotel h1){
    int size1=reservationtab.size();
    int size2= h1.tabchambre().size();
    if(size1 < size2){
        return false;
    }
    else{
        return true;
    }
}

bool creneau_valide(std::vector<Reservation>& reservationtab,Date date,int nbdenuits){

}

bool search_chambre(std::string typechambre,Reservation& r,std::vector<Reservation>& reservationtab){
    
}

void saisi_reservation(std::vector<Reservation>& reservationtab,Reservation& r ,hotel::Hotel h1,std::string idclient){
 
    r.setIdHotel(h1.idhotel());

    r.setIdClient(idclient);

    bool datevalide = false;
    int nbdenuits;
    int jour;
    int moi;
    int année;
    

    while(datevalide == false){
        std::cout<<"saissisez le nombre de nuit "<<std::endl;
        std::cin>> nbdenuits;

        std::cout<<"saissisez la date : "<<std::endl;
        std::cout<<"saissisez le jour "<<std::endl;
        std::cin>> jour;
        std::cout<<"saissisez le moi "<<std::endl;
        std::cin>> moi;
        std::cout<<"saissisez l'année "<<std::endl;
        std::cin>> année;
        Date date(jour,moi,année);
        if (creneau_valide(reservationtab,date,nbdenuits)==true){
           r.setNbNuits(nbdenuits);
           r.setNuitDebut(date);
           datevalide = true;
        }
        else{
            std::cout<<"créneau non disponible veuillez resaisir"<<std::endl;
        }
            
        }

        //recherche chambre
        std::string typechambre;
        std::cout<<"saisisez le type de chambre souhaité"<<std::endl;
        std::cin>>typechambre;
        bool reservation_comp = false;
        while(reservation_comp==false){
           if(search_chambre(typechambre,r,reservationtab)==true){
             reservation_comp=true;
           }
           else{
            std::cout<<"choissisez un autre type de chambre"<<std::endl;
            std::cin >>typechambre;
           }
        }





    }

    


}
