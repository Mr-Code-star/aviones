#include "pch.h"
#include "conio.h"
#include "Avion.h"
using namespace System;
using namespace std;

int main()
{
	
	Avion* OBJ = new Avion();
	OBJ->aviones();
	int n;
	cout << "ingrese un avion: "; cin >> n;
	system("cls");
	while (true)
	{
		OBJ->moveravion(n);
		_sleep(100);
	}
}
