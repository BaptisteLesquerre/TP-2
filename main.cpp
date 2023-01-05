#include <iostream>
//#include "date.h"
#include "hotel.h" 
#include "client.h"
#include "reservation.h"
#include <algorithm>

int main(int argc, char const *argv[]) {
	//création d'un hotel
	hotel::Hotel h1("45","bg","paris");
	h1.cch(5,"double",125,0);
	h1.cch(2,"suite",210,5);
	h1.cch(3,"single",100,7);
    
	
	//création d'un tableau de clients
	std::vector<Client> cl;
    cl.push_back(Client ("1","semoule","bernard"));
	cl.push_back(Client ("2","potiron","jacque"));
	cl.push_back(Client ("3","couscous","eric"));
	cl.push_back(Client ("4","casoulet","patrique"));


    std::vector<Reservation> r;

    //7.1
    std::string ids =saisi_client(cl);

	//7.2
	Date datedef;
	Reservation reservation(datedef,0,"",0,"",0);

}
