#include "Header.h"




int main()
{

	setlocale(LC_ALL, "Ru");



	Phone_Book* phone_book = new Phone_Book;

	Triger:
	phone_book->Menu();
	string name;
	string phone;

	int choice;
	cout<< endl;
	cout << "�����: "; cin >> choice;
	switch (choice)
	{

	case 1:
		phone_book->GetAllContactListFromMap();
		goto Triger;
	case 2:
		cout << "������� ���: "; cin >> name;
		cout << "������� �����: "; cin >> phone;
		phone_book->AddContact(name, phone);
		goto Triger;
		
	case 3:
		cout << "������� ���: "; cin >> name;
		phone_book->FindByName(name);
		goto Triger;
	case 4:
		cout << "������� �����: "; cin >> phone;
		phone_book->FindByNumber(phone);
		goto Triger;
	case 5:
		cout << "������� ���: "; cin >> name;
		phone_book->RemoveContact(name);
		goto Triger;
	case 6:
		exit(1);

	}
	

	
	return 0;

}