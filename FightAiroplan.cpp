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
	cout << "������ ����� " << statusArmor << endl;
	pProj->print();
	pcAir->print();
	cout << "----------------------------------------" << endl;
}

// ��������
void FightAiroplan::shoot() {
	pcAir->shot();
	
}

//���������
void FightAiroplan::hit(Projectile *shotOther) {

	if (statusArmor >= 0) {
		// ���� ������� ��� ����� �����
			statusArmor = statusArmor - shotOther->getLoss();
			if (statusArmor <= 0) {
				cout << pcAir->getName() << " ���������" << endl;
				return;
			}
			cout << " ���������! � " << pcAir->getName() <<  " ����� " << statusArmor << endl;
	}
	else {
		cout << "������� ��� ���������" << endl;
	}
}