// Jpesel.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
//#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	int ile;
	string pesel;
	static int suma_mnozenia = 0;
	int mnozenie;
	cin >> ile;
	
	for (int i = 0; i < ile; i++)
	{
		cin >> pesel;

		suma_mnozenia += (mnozenie = pesel[0] * 1);
		suma_mnozenia += (mnozenie = pesel[1] * 3);
		suma_mnozenia += (mnozenie = pesel[2] * 7);
		suma_mnozenia += (mnozenie = pesel[3] * 9);
		suma_mnozenia += (mnozenie = pesel[4] * 1);
		suma_mnozenia += (mnozenie = pesel[5] * 3);
		suma_mnozenia += (mnozenie = pesel[6] * 7);
		suma_mnozenia += (mnozenie = pesel[7] * 9);
		suma_mnozenia += (mnozenie = pesel[8] * 1);
		suma_mnozenia += (mnozenie = pesel[9] * 3);
		suma_mnozenia += (mnozenie = pesel[10] * 1);
		
		cout <<suma_mnozenia << endl;
		if (suma_mnozenia > 0)
		{
			if (suma_mnozenia % 10 == 0)
			{
				cout << "D" << endl;
			}
			else cout << "N" << endl;
		}
	}
	
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
