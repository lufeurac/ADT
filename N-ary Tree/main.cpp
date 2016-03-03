#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "N_tree.h"

int random_num();

int main()
{
	srand(time(NULL));
	int pes = 2,a=1,b=3,c=4,d=5,e=6,f=7,g=8,h=9,i=10;
	N_tree<int> pepe(pes);

	if(pepe.add_node(pes,a))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(pes,b))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(pes,c))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(pes,d))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(a,e))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(a,f))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(c,g))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(c,h))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;
	if(pepe.add_node(d,i))
		std::cout << "exito" << std::endl;
	else
		std::cout << "fail" << std::endl;

		pepe.pre_order(pepe.get_root());
		pepe.pos_order(pepe.get_root());

		
		//pepe.pre_order(pepe.get_root());
}

int random_num()
{
	return (rand() % 100 + 1);
};
