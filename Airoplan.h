/*
1.“ребуетс€ реализовать улучшение дл€ класса самолет(пол€ им€, кол-во мест, способ управлени€
(2 человека, 1), скорость и т.д.)
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
 добавить ему возможность стрел€ть в отдельном классе боевой самолет
*/

class combatAiroplan: public Airoplan {
    // оличество выстрелов
    int numberShots;
public:
    combatAiroplan();
    void setNumberShots(int);
    int getNumberShots();
    void shot();
    void print();
};

/*
≈сть класс снар€д(тип, наносимый урон, размер и т.д.)
*/

class Projectile {
    string type;
    float loss; // 0 до 1
public:
    Projectile();
    Projectile(string, float);
    float getLoss();
    void print();
};

/*
 ќгда снар€д попадает в самолет и когда самолет выпускает снар€д
*/

class FightAiroplan {
    Projectile* pProj;
    combatAiroplan *pcAir;
    // Ѕрон€ всегдна 1
    float statusArmor;
public:
    FightAiroplan(Projectile*, combatAiroplan*);
    void print();
    void shoot();
    void hit(Projectile*);
    float getStatus();
    float getShotNumber();
};