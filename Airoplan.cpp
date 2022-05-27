#include "Airoplan.h"
#include <iostream>
using namespace std;

Airoplan::Airoplan() {
    name = "PAVLOV";
    typeName = "AIROBUS";
    countUser = 250;
    management = 4;
    velosity = 960;
    brutto = 25000;
};

string Airoplan::getName() {
    return name;
}
void Airoplan::setName(string value) {
    name = value;
}

string Airoplan::getTypeName() {
    return typeName;
}
int Airoplan::getCountUser() {
    return countUser;
}
int Airoplan::getManagement() {
    return management;
}
float Airoplan::getVelosity() {
    return velosity;
}
float Airoplan::getBrutto() {
    return brutto;
}

void Airoplan::print() {
    cout << "Имя самолета " << name << endl;
    cout << "Тип самолета " << typeName << endl;
    cout << "Количество мест " << countUser << endl;
    cout << "Количество пилотов " << management << endl;
    cout << "Скорость самолета " << velosity << endl;
    cout << "Максимальная нагрузка самолета " << brutto << endl;
}