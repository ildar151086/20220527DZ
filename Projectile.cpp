#include <iostream>
using namespace std;

#include "combatAiroplan.h"
#include "Airoplan.h"


Projectile::Projectile() {
	type = "�����";
	loss = 1;// ������ �����������
};


Projectile::Projectile(string name, float value) {
	type = name;
	loss = (value > 1.01) ? 1 : (value < 0) ? 0 : value;
}

float Projectile::getLoss() {
	return loss;
}

void Projectile::print() {
	cout << "��� ������ " <<  type << endl;
	cout << "���� ������ " << loss << endl;
}
