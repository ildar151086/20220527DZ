#include <iostream>
using namespace std;

#include "combatAiroplan.h"
#include "Airoplan.h"


Projectile::Projectile() {
	type = "Пипец";
	loss = 1;// Полное уничтожение
};


Projectile::Projectile(string name, float value) {
	type = name;
	loss = (value > 1.01) ? 1 : (value < 0) ? 0 : value;
}

float Projectile::getLoss() {
	return loss;
}

void Projectile::print() {
	cout << "Тип оружия " <<  type << endl;
	cout << "Сила оружия " << loss << endl;
}
