#pragma once
class Cmovil
{
protected:
	int x;
	int y;
	int dx;
	int dy;
	int ancho;
	int alto;
	int color;
public:
	Cmovil(){
		x = 0;
		y = 0;
		dx = 0;
		dy = 0;
		
	}

	Cmovil(int x, int y, int dx, int dy, int ancho, int alto, int color){
		this->x = x;
		this->y = y;
		this->dx = dx;

	}
	~Cmovil() {};

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setDx(int dx) { this->dx = dx; }
	
	int getX() { return this->x; }
	int getY() { return this->y; }
	int getDx() { return this->dx; }
	

};

