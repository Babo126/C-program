#ifndef VENDING_MACHINE
#define VENDING_MACHINE
//這是.h檔，通常拿來寫宣告 
class Vending_machine{
	public: //可以給user使用 
		void ordered_chicken(); 
		int money();
	private://只能給自身class type的物件使用 
		int price; 
};

#endif 
