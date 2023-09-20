#include "brazo.h"
brazo::brazo() {
	corx = 0;
	cory = 0;
	corz = 0;
	sujeto = 0;
}
void brazo::mover(double x, double y, double z) {
	corx = x;
	cory = y;
	corz = z;
}
double brazo::getx() {
	return corx;


}
double brazo::gety() {
	return cory;
}
double brazo::getz() {
	return corz;
}
bool brazo::getsu() {
	return sujeto;
}


void brazo::coger() {
	sujeto = 1;
}
void brazo::soltar() {
	sujeto = 0;
}

