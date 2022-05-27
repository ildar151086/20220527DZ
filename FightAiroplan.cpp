#include <iostream>
using namespace std;

#include "combatAiroplan.h"
#include "Airoplan.h"


FightAiroplan::FightAiroplan(Projectile* proj,combatAiroplan* pAir) {
	this->pProj = proj;
	this->pcAir = pAir;
	this->statusArmor = 1;
}

float FightAiroplan::getStatus() {
	return statusArmor;
}

float FightAiroplan::getShotNumber() {
	return pcAir->getNumberShots();
}

void FightAiroplan::print() {
	cout << endl;
	cout << "Статус брони " << statusArmor << endl;
	pProj->print();
	pcAir->print();
	cout << "----------------------------------------" << endl;
}

// стреляем
void FightAiroplan::shoot() {
	pcAir->shot();
	
}

//Попадание
void FightAiroplan::hit(Projectile *shotOther) {

	if (statusArmor >= 0) {
		// Если самолет еще имеет броню
			statusArmor = statusArmor - shotOther->getLoss();
			if (statusArmor <= 0) {
				cout << pcAir->getName() << " уничтожен" << endl;
				return;
			}
			cout << " Попадание! в " << pcAir->getName() <<  " Броня " << statusArmor << endl;
	}
	else {
		cout << "Самолет уже уничтожен" << endl;
	}
}