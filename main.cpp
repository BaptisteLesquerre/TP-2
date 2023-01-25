#include <iostream>
#include "date.h"
#include "hotel.h" 
#include "client.h"
#include "reservation.h"
#include <algorithm>

int main(int argc, char const *argv[]) {
	
        Date test(14,9,2023);
	int a = 4;
	Date test2 = test+a;
	//std::cout<<test2<<std::endl;

	//création d'un hotel.............................................................................
	hotel::Hotel h1("45","bg","paris");
	h1.chambre_creator(5,"double",125,1);
	h1.chambre_creator(2,"suite",210,6);
	h1.chambre_creator(3,"single",100,8);
	h1.chambre_creator(1,"maintenance",0,0);
	//std::cout<< h1.tostring() <<std::endl;
    
	
	//création d'un tableau de clients................................................................
	std::vector<Client> tab_client;
        //cl.push_back(Client ("1","semoule","bernard"));
	//cl.push_back(Client ("2","potiron","jacque"));
	//cl.push_back(Client ("3","couscous","eric"));
	//cl.push_back(Client ("4","casoulet","patrique"));
        
	//création d'un tableau de réservation et de ces réservations.....................................
	
	//Date d1(1,1,2023);
        //Reservation r1(d1,5,h1.idhotel(),0,"1",625);
	//reservationtab.push_back(r1);
	//Date d2(5,5,2023);
        //Reservation r2(d2,5,h1.idhotel(),5,"2",625);
    	//reservationtab.push_back(r2);
	
        std::vector<Reservation> rtab;
        Date d(1,1,2023); 
        Reservation rm("0",d,300, h1.idhotel(), 0, "0", 0);  //reservation 0 (initialise rtab)
        rtab.push_back(rm);
	reservation_creator(h1,tab_client, rtab);
	
	display_reservation_client( rtab, tab_client);
	display_reservation(rtab);
	
}
