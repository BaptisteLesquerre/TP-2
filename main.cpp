#include <iostream>
#include "date.h"
#include "hotel.h" 

int main(int argc, char const *argv[]) {
	date::Date d1(29,11,2022);
	std::cout << d1.day() <<std::endl;
	std::cout << d1.month() <<std::endl;
	std::cout << d1.year() <<std::endl;
	
	hotel::Chambre ch1(1,"king",666);
	std::vector<hotel::Chambre> c1 ={ch1};
	
	hotel::Hotel h1("45","g","paris",c1);
	std::cout << h1.nom() <<std::endl;
	h1.update_nom("hghg");
	std::cout << h1.nom() <<std::endl;

	std::cout << c1.size() <<std::endl;
	hotel::Chambre ch2(5,"king",77);
	c1.push_back(ch2);
	std::cout << c1.size() <<std::endl;
	
}
