#include <iostream>
using namespace std;

class brazo {
private:
double corx;
double cory;
double corz;
bool sujeto;

public:
brazo();
double getx();
double getz();
double gety();
void coger();
void soltar();
void mover(double x,double y,double z);
bool getsu();
};
