/*
1.��������� ����������� ��������� ��� ������ �������(���� ���, ���-�� ����, ������ ����������
(2 ��������, 1), �������� � �.�.)
*/

#include <iostream>
using namespace std;


class Airoplan {
    string name;
    string typeName;
    int countUser;
    int management;
    float velosity;
    float brutto;
public:
    Airoplan();
    string getName();
    void setName(string);
    string getTypeName();
    int getCountUser();
    int getManagement();
    float getVelosity();
    float getBrutto();

    void print();
};


/*
 �������� ��� ����������� �������� � ��������� ������ ������ �������
*/

class combatAiroplan: public Airoplan {
    //���������� ���������
    int numberShots;
public:
    combatAiroplan();
    void setNumberShots(int);
    int getNumberShots();
    void shot();
    void print();
};

/*
���� ����� ������(���, ��������� ����, ������ � �.�.)
*/

class Projectile {
    string type;
    float loss; // 0 �� 1
public:
    Projectile();
    Projectile(string, float);
    float getLoss();
    void print();
};

/*
����� ������ �������� � ������� � ����� ������� ��������� ������
*/

class FightAiroplan {
    Projectile* pProj;
    combatAiroplan *pcAir;
    // ����� ������� 1
    float statusArmor;
public:
    FightAiroplan(Projectile*, combatAiroplan*);
    void print();
    void shoot();
    void hit(Projectile*);
    float getStatus();
    float getShotNumber();
};