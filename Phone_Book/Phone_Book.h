#pragma once
#include "Header.h"
class Phone_Book
{
private:
	string name;
	string number;
	fstream f;
	string contacts = "phone_book.txt";
	map<string,string> contacts_map;
	
public:
	Phone_Book();
	auto  Get_contacts();
	void Menu();
	void GetAllContactListFromMap();
	void AddContact(string, string);
	void FindByName(string);
	void FindByNumber(string);
	void RemoveContact(string);

	~Phone_Book();

	
};

