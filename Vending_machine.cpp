#include "Vending_machine.h"
#include <iostream> 
//這是.cpp檔，通常拿來寫定義
void Vending_machine::ordered_chicken(){//"::"為範圍解析運算子用以定義成員函式 
	std::cout << "the machine get your order\n"; //輸出 
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
