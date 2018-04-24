#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>

using namespace std;

class Dzialanie
{
public:

	double b;
	double wynik;
	double pamiec;
	string op;

	void menu()
	{
		cout << "MENU KALKULATOR PROSTY" << endl << endl;
		cout << "Operator do wyboru:" << endl;
		cout << "+ dodawanie" << endl;
		cout << "- odejmowanie" << endl;
		cout << "* mnozenie" << endl;
		cout << "/ dzielenie" << endl;
		cout << "% procent" << endl;
		cout << "p pierwiastek" << endl;
		cout << "e koniec" << endl;
		cout << "c wyzerowanie" << endl;
		cout << "x MC" << endl;
		cout << "y MR" << endl;
		cout << "z M+" << endl;
		cout << "Co chcesz zrobic ?" << endl << endl;

		cout << "Pamiec: " << pamiec << endl;
		cout << "Wynik: " << wynik << endl;
	}


	void dodawanie()
	{
		cout << "podaj liczbe" << endl;
		cin >> b;
		wynik = wynik + b;
	}

	void odejmowanie()
	{
		cout << "podaj liczbe" << endl;
		cin >> b;
		wynik = wynik - b;
	}

	void dzielenie()
	{
		cout << "podaj liczbe" << endl;
		cin >> b;
		wynik = wynik / b;
	}

	void mnozenie()
	{
		cout << "podaj liczbe" << endl;
		cin >> b;
		wynik = wynik * b;
	}

	void procent()
	{
		cout << "podaj liczbe" << endl;
		cin >> b;
		wynik = wynik * b / 100;
	}

	void pierwiastek()
	{
		wynik = sqrt(wynik);
	}

	void zerowanie()
	{
		wynik = 0;
	}

	void mc()
	{
		pamiec = 0;
	}

	void mr()
	{
		wynik = pamiec;
	}

	void mplus()
	{
		pamiec = pamiec + wynik;
	}

	void sterowanie()
	{
		cin >> op;
		if (op != "+" && op != "-" && op != "/" && op != "*" && op != "%" && op != "p" && op != "e" && op != "c" && op != "x" && op != "y" && op != "z")
		{
			wynik = stod(op);
		}
		else
		{
			if (op == "+") dodawanie();
			else if (op == "-") odejmowanie();
			else if (op == "/") dzielenie();
			else if (op == "*") mnozenie();
			else if (op == "%") procent();
			else if (op == "p") pierwiastek();
			else if (op == "e");
			else if (op == "c") zerowanie();
			else if (op == "x") mc();
			else if (op == "y") mr();
			else if (op == "z") mplus();
		}
		system("cls");
		menu();
	}
};

int main()
{
	Dzialanie d;
	d.op = "tata";
	d.pamiec = 0;
	d.wynik = 0;
	d.menu();
	while (d.op != "e")
	{
		d.sterowanie();
	}

	return 0;
}

