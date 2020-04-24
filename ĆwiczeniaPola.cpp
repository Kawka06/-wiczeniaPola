#include <iostream>
#include "funkcjek.h"




using namespace std;



int main()
{
	char znak = 'N';

	int wybor;

	do
	{
		system("cls");

		MenuBox();

		cin >> wybor;																/*while(!(cin >> wybor))
																					{
																					 
																						cout << "stan przed: " << cin.rdstate() << endl; 
																					 cin.clear();
																					 cout << "stan po: " << cin.rdstate() << endl;
																					 cin.ignore(1024, '\n');


																					}
																					*/

		MenuDecision(wybor);

		cout << "Czy chcesz zakończyć program? (T/N) " << endl;

		cin >> znak;

		cin.ignore(1024, '\n');

	} while (znak == 'n' || znak == 'N');

	return 0;
}

