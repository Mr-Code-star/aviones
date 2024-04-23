#pragma once
#include "Cmovil.h"
#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;
class Avion : public Cmovil
{
private:

public:
	Avion() :Cmovil() {
		x = 10;
		y = 5;
		dx = 2;
	}
	void boraravion (int opc){
		switch (opc) {
		case 1:
			Console::SetCursorPosition(x, y);	cout << "           " << endl;
			Console::SetCursorPosition(x, y+1);	cout << "           " << endl;
			Console::SetCursorPosition(x, y+2);	cout << "           " << endl;
			break;
		case 2:
			Console::SetCursorPosition(x, y);		cout << "                 " << endl;
			Console::SetCursorPosition(x, y + 1);	cout << "                 " << endl;
			Console::SetCursorPosition(x, y + 2);	cout << "                 " << endl;
			break;
		case 3:
			Console::SetCursorPosition(x, y);	cout << "                   " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "                   " << endl;
			Console::SetCursorPosition(x, y + 2); cout << "                   " << endl;
			break;
		case 4:
			Console::SetCursorPosition(x, y);	cout << "             " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "             " << endl;
			Console::SetCursorPosition(x, y + 2); cout << "             " << endl;
			break;
		case 5:
			Console::SetCursorPosition(x, y);	cout << "             " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "             " << endl;
			Console::SetCursorPosition(x, y + 2); cout << "             " << endl;
			break;
		case 6:
			Console::SetCursorPosition(x, y)	;cout << "                 " << endl;
			Console::SetCursorPosition(x, y + 1);cout << "                 " << endl;
			Console::SetCursorPosition(x, y + 2);cout << "                 " << endl;
			Console::SetCursorPosition(x, y + 3);cout << "	              " << endl;
			break;
		case 7:
			Console::SetCursorPosition(x, y)	;cout << "       " << endl;
			Console::SetCursorPosition(x, y + 1);cout << "       " << endl;

			break;
		case 8:
			Console::SetCursorPosition(x, y)	;cout << "                 " << endl;
			Console::SetCursorPosition(x, y + 1);cout << "                 " << endl;
			break;
		case 9:
			Console::SetCursorPosition(x, y);	cout << "                " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "                " << endl;
			Console::SetCursorPosition(x, y + 2); cout << "                " << endl;
			Console::SetCursorPosition(x, y + 3); cout << "                " << endl;
			break;
		default:
			break;
		}
	}
	void dibujaravion(int opc){
		switch (opc){
		case 1:
			Console::SetCursorPosition(x, y);	cout << "-----------" << endl;
			Console::SetCursorPosition(x, y+1);	cout << "_\__(_)__/_" << endl;
			Console::SetCursorPosition(x, y+2);	cout << "   ./ \.   " << endl;
			break;
		case 2:
			Console::SetCursorPosition(x, y);	cout << "________|________" << endl;
			Console::SetCursorPosition(x, y + 1); cout << " _|_____0_____|_ " << endl;
			Console::SetCursorPosition(x, y + 2); cout << "      |   |      " << endl;
			break;
		case 3:
			Console::SetCursorPosition(x, y);	cout << "       __|__       " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "________(*)________" << endl;
			Console::SetCursorPosition(x, y + 2); cout << "       o/ \o       " << endl;
			break;
		case 4:
			Console::SetCursorPosition(x, y);	cout << "    __!__    " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "_____(_)_____" << endl;
			Console::SetCursorPosition(x, y + 2); cout << "    ! ! !    " << endl;
			break;
		case 5:
			Console::SetCursorPosition(x, y);	cout << "    __!__    " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "=====<*>=====" << endl;
			Console::SetCursorPosition(x, y + 2); cout << "    o O o    " << endl;
			break;
		case 6:
			Console::SetCursorPosition(x, y);	cout << "        .        " << endl;
			Console::SetCursorPosition(x, y + 1); cout << "._______|_______." << endl;
			Console::SetCursorPosition(x, y + 2); cout << "      \(*)/      " << endl;
			Console::SetCursorPosition(x, y + 3); cout << "	   o/ \o      " << endl;
			break;
		case 7:
			Console::SetCursorPosition(x, y)	;cout << "   |   " << endl;
			Console::SetCursorPosition(x, y + 1);cout << "--=O=--" << endl;
		
			break;
		case 8:
			Console::SetCursorPosition(x, y)	;cout << "      \ . /      " << endl;
			Console::SetCursorPosition(x, y + 1);cout << ".______(*)______." << endl;
			break;
		case 9:
			Console::SetCursorPosition(x, y);	cout << "   ____       _ " << endl;
			Console::SetCursorPosition(x, y + 1);cout << "| __\_\_o____/_|" << endl;
			Console::SetCursorPosition(x, y + 2);cout << "<[___\_\_-----<|" << endl;
			Console::SetCursorPosition(x, y + 3);cout << "|     \_\    \_|" << endl;
			break;
		default:
			break;
		}
	}
	void moveravion(int opc) {
		boraravion(opc);
		if (x + dx < 0 || x + dx + 11 > Console::WindowWidth) {
			dx = -dx; 
		}
		x += dx;
		dibujaravion(opc);
	}

	void aviones() {
		
		    Console::SetCursorPosition(5, 4); cout << "1." << endl;
			Console::SetCursorPosition(x, y);	cout << "-----------" << endl;
			Console::SetCursorPosition(x, y + 1);	cout << "_\__(_)__/_" << endl;
			Console::SetCursorPosition(x, y + 2);	cout << "   ./ \.   " << endl;
			
			Console::SetCursorPosition(32, 4); cout << "2." << endl;
			Console::SetCursorPosition(x, y);	  cout << "________|________" << endl;
			Console::SetCursorPosition(x, y + 5); cout << " _|_____0_____|_ " << endl;
			Console::SetCursorPosition(x, y + 6); cout << "      |   |      " << endl;
			
			Console::SetCursorPosition(55, 4); cout << "3." << endl;
     		Console::SetCursorPosition(x+20, y);	cout << "       __|__       " << endl;
			Console::SetCursorPosition(x+20, y + 1); cout << "________(*)________" << endl;
			Console::SetCursorPosition(x+20, y + 2); cout << "       o/ \o       " << endl;
			
			Console::SetCursorPosition(72, 4); cout << "4." << endl;
			Console::SetCursorPosition(x+45, y);	cout << "    __!__    " << endl;
			Console::SetCursorPosition(x+45, y + 1); cout << "_____(_)_____" << endl;
			Console::SetCursorPosition(x+45, y + 2); cout << "    ! ! !    " << endl;
		
			Console::SetCursorPosition(85, 4); cout << "5." << endl;
			Console::SetCursorPosition(x+60, y);	cout << "    __!__    " << endl;
			Console::SetCursorPosition(x+60, y + 1); cout << "=====<*>=====" << endl;
			Console::SetCursorPosition(x+60, y + 2); cout << "    o O o    " << endl;
		
			Console::SetCursorPosition(5, 10); cout << "6." << endl;
			Console::SetCursorPosition(x+75, y);	cout << "        .        " << endl;
			Console::SetCursorPosition(x+75, y + 1); cout << "._______|_______." << endl;
			Console::SetCursorPosition(x+75, y + 2); cout << "      \(*)/      " << endl;
			Console::SetCursorPosition(x+75, y + 3); cout << "	   o/ \o      " << endl;
	
			Console::SetCursorPosition(30, 10); cout << "7." << endl;
			Console::SetCursorPosition(x+24, y+6); cout << "   |   " << endl;
			Console::SetCursorPosition(x+24, y +7); cout << "--=O=--" << endl;

			Console::SetCursorPosition(50, 10); cout << "8." << endl;
			Console::SetCursorPosition(x+40, y+6); cout << "      \ . /      " << endl;
			Console::SetCursorPosition(x+40, y + 7); cout << ".______(*)______." << endl;
		
			Console::SetCursorPosition(73, 10); cout << "9." << endl;
			Console::SetCursorPosition(x+65, y+5);	cout << "   ____       _ " << endl;
			Console::SetCursorPosition(x+65, y + 6); cout << "| __\_\_o____/_|" << endl;
			Console::SetCursorPosition(x+65, y + 7); cout << "<[___\_\_-----<|" << endl;
			Console::SetCursorPosition(x+65, y + 8); cout << "|     \_\    \_|" << endl;
		
		
	}
};

