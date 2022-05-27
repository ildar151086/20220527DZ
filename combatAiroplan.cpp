#include <iostream>
using namespace std;

#include "combatAiroplan.h"
#include "Airoplan.h"



combatAiroplan::combatAiroplan() {
	numberShots = 10;
};

void combatAiroplan::shot() {
	if (numberShots != 0) {
		cout << "������� ������� � " << numberShots-- << endl;
	}
}

void combatAiroplan::setNumberShots(int count) {
	numberShots = count;
}

int combatAiroplan::getNumberShots() {
	return numberShots;
}

void combatAiroplan::print() {
	Airoplan::print();
	cout << "��������� ��������� " << numberShots << endl;
}