#include<iostream>

#include"Link_list.h"





int main() {

	LinkedList list;
	list.AddHead(10);
	
	
	
	list.ShowList();
	std::cout << "\n\n";
	//std::cout << list.FindElement(2)->GetData();
	std::cout << "\n\n";
	list.DeleteElement(1);
	list.ShowList();

	return 0;
}