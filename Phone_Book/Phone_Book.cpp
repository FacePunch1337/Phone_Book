#include "Header.h"


Phone_Book::Phone_Book()
{
	contacts = contacts;
	name = name;
	number = number;
	
}


auto Phone_Book::Get_contacts()
{
	return contacts_map;
}

void Phone_Book::Menu()
{
	cout << endl;
	cout << "1] Вывести список контактов" << endl;
	cout << "2] Добавить контакт" << endl;
	cout << "3] Найти по имени" << endl;
	cout << "4] Найти по номеру телефона" << endl;
	cout << "5] Удалить контакт" << endl;
	cout << "6] Выход" << endl;
}



void Phone_Book::AddContact(string name, string number)
{
	Phone_Book* phone_book = new Phone_Book;
	contacts_map[name] = number;

	auto size = contacts_map.size();
	delete phone_book;
}


void Phone_Book::GetAllContactListFromMap()
{

	for (auto iterator : contacts_map) {
		cout << iterator.first << " " << iterator.second << endl;
	}
	
}




void Phone_Book::FindByName(string name)
{
	if (contacts_map.empty()) {
		cout << "Empty" << endl;
		return;
	}
	size_t count = 0;
	for (auto iterator : contacts_map) {
		if (iterator.first == name) {
			cout << iterator.first << " " << iterator.second << endl;
			count++;
		}
	}
	if (!count) {
		cout << "Not founded!" << endl;
		return;
	}
}

void Phone_Book::FindByNumber(string number)
{
	if (contacts_map.empty()) {
		cout << "Empty" << endl;
		return;
	}
	size_t count = 0;
	for (auto iterator : contacts_map) {
		if (iterator.second == number) {
			cout << iterator.first << " " << iterator.second <<endl;
			count++;
		}
	}
	if (!count) {
		cout << "Not founded!" << endl;
		return;
	}
	
}

void Phone_Book::RemoveContact(string name)
{
	if (contacts_map.empty()) {
		cout << "Empty" << endl;
		return;
	}
	if (contacts_map.find(name) == contacts_map.end()) {
		cout << name << endl;
		return;
	}
	contacts_map.erase(name);
	std::cout << name << " Removed!" << endl;
}

Phone_Book::~Phone_Book()
{
}





	
