#include "Vending_machine.h"
#include <iostream> 
//�o�O.cpp�ɡA�q�`���Ӽg�w�q
void Vending_machine::ordered_chicken(){//"::"���d��ѪR�B��l�ΥH�w�q�����禡 
	std::cout << "the machine get your order\n"; //��X 
	price = 50;
} 

int Vending_machine::money(){
	return price; 	
}

int main(){
	Vending_machine machine1, machine2;
	
	machine1.ordered_chicken();
	std::cout << machine1.money();
}
