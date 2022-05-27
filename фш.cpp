/*

1.Требуется реализовать улучшение для класса самолет(поля имя, кол-во мест, способ управления
(2 человека, 1), скорость и т.д.)
 добавить ему возможность стрелять в отедльном классе боевой самолет 
 (или истривитель, поля также можете описать самостоятельно).
2.Есть класс снаряд(тип, наносимый урон, размер и т.д.) и самолет(из 1 задачи можно взять поля). 
реализовать связь между классами.
КОгда снаряд попадает в самолет и когда самолет выпускает снаряд
3.Есть класс крыло самолета(размер, левое или правое, повреждено или нет и т.д.) 
и сам самолет(поля можно взять из 1 задачи).реализовать связь между классами.

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Airoplan.h"

using namespace std;



int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    
    // Боевые самолеты
    combatAiroplan cAiro1;
    cAiro1.setName ("Самолет 1");

    combatAiroplan cAiro2;
    cAiro2.setName("Самолет 2");
    cAiro2.setNumberShots(20); // Увеличиваем боекопмлект

    // боеприпасы
    Projectile projAiro1("Оружие 1 ", 0.2);
    Projectile projAiro2("Оружие 2 ", 0.08);

    // Боевой самолет 1
    FightAiroplan fAiro1( &projAiro1, &cAiro1);
    fAiro1.print();

    // Боевой самолет 2
    FightAiroplan fAiro2(&projAiro2, &cAiro2);
    fAiro2.print();

    // Пока каконить самолет не будет уничтожен или не израсходует боевой запас
    while (fAiro1.getStatus() > 0 && fAiro2.getStatus() > 0) {
        // Проверяем боекомплект
        if (fAiro1.getShotNumber() == 0) {
            cout << "Закончился боекоплект 1 самолета" << endl;
            break;
        }
        if (fAiro2.getShotNumber() == 0) {
            cout << "Закончился боекоплект 2 самолета" << endl;
            break;
        }
        
        // Кто первый стреляет
        if ((rand() % 10 ) > 5) {
            cout << " Cтреляет 1 самолет " << endl;
            fAiro1.shoot();
            fAiro2.hit(&projAiro1);
        }
        else {
            cout << " Cтреляет 2 самолет " << endl;
            fAiro2.shoot();
            fAiro1.hit(&projAiro2);
        }
    }

    return 0;
}

