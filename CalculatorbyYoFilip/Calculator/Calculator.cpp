//Calculator by Yo Filip
//Discord 神Yo Fιlip神#1544
//GitHub https://github.com/YoFilip
//Wzorowany https://www.youtube.com/watch?v=CNiWWX15Zns

#include <iostream>

using namespace std;

int main()
{

	char działanie; //Zainicjowanie zmiennej działanie
	double liczba1; //Zainicjowanie zmiennej liczba1
	double liczba2; //Zainicjowanie zmiennej liczba2

	//Wprowadzenie potrzebnych danych
	cout << "Wybierz dzialanie ( + ; - ; / ; * ): ";
	cin >> działanie; // Wybranie działania

	cout << "Wprowadz pierwsza liczbe dzialania: ";
	cin >> liczba1; //Wprowadzenie liczby pierwszej


	cout << "Wprowadz druga liczbe dzialania: ";
	cin >> liczba2;  //Wprowadzenie liczby drugiej
	cout << endl;

	

	//Rozważanie warónków i obiczenia
	switch (działanie) { //Zainicjowanie swicha służącego do wykonywania obiczeń

	case '+': //Zainicjowanie casa służącego do wykonywania obiczeń dodawania
		cout << "Wynikiem dzialania " << liczba1 << " + " << liczba2 << " jest " << (liczba1 + liczba2);
		cout << endl;
		break;


	case '-':  //Zainicjowanie casa służącego do wykonywania obiczeń odejmowania
		cout << "Wynikiem dzialania " << liczba1 << " - " << liczba2 << " jest " << (liczba1 - liczba2);
		cout << endl;
		break;

	case '*':  //Zainicjowanie casa służącego do wykonywania obiczeń mnożenia 
		cout << "Wynikiem dzialania " << liczba1 << " * " << liczba2 << " jest " << (liczba1 * liczba2);
		cout << endl;
		break;


	case '/':  //Zainicjowanie casa służącego do wykonywania obiczeń dzielenia 
		if (liczba1 != 0.0) {
			cout << "Wynikiem dzialania " << liczba1 << " / " << liczba2 << " jest " << (liczba1 / liczba2);
		}
		else {
			cout << "Nie można dzielic przez zero!!!";
		}
		break;
	default:
		cout << "Wprowadz poprwany operator!!";
		cout << endl;

	}
}
