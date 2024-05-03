#include <iostream>
#include <string>
#include <list>
#include <stdlib.h>
using namespace std;

class Life {
public:
    void Mating(int& maxAnimal) {
        cout<<"В вольере стало теснее! Родилась новая зверушка!!" << endl;
        maxAnimal++;
    }
    void Death(int& maxAnimal) {
        cout <<"В вольере погибла зверушка" << endl;
        maxAnimal--;
    };
};


class Cage 
{
public:

    int status = 100;

    void ShowStatus() {
        cout << "Состояние вольера: " << status << " %" << endl;
    };

    void StatusDef() {
        int start = 10;
        int end = 37;
        int x = rand() % (end - start + 1) + start;
        status = status - x;
        if (0 >= status) { cout << "Состояние вашего вольера стало очень плохим пришлось перенести всех зверушек:(" << endl; exit(0); }
    };
    void ClearStatus() {
        cout << "Вы почистили вольер" << endl;
        status = 100;
    }
    void AddAnimal(int& maxAnimal) {
        if (maxAnimal == 7) { cout<< "Больше нельзя" << endl; }
        else {
            cout << "Вы приютили зверушку" << endl;
            maxAnimal++;
        }
    };
};

class Animal
{
public:

    string name;

    void AddName(string name){
        this->name = name;
    };
    void Eat(bool& mainhunger) {
        mainhunger = false;
    }
    void Wash(bool& mainpurity) {
        mainpurity = true;
        
    }
    void Show(string name, bool hunger, bool purity) {
        cout << name << endl;

        if (hunger == true) { cout << "Состояние:\nГолод" << endl; }
        else if (hunger == false) { cout << "Состояние:\nСытость" << endl; }
        else { cout << "ошибка" << endl; }
       
        if (purity == true) { cout << "Чистый\\ая" << endl; }
        else if (purity == false) { cout << "Грязный\\ая" << endl; }
        else { cout << "ошибка" << endl; }
    }
};

class Zoo : public Life, public Cage, public Animal {

};
void PrintCagemenu() {
    cout << "-----------------------------------" << endl;
    cout << "1. Проверить сотояние вольера" << endl;
    cout << "2. Почистить вольер" << endl;
    cout << "3. Разместить игрушки для интерьра" << endl;
    cout << "4. Приютить одну зверушку" << endl;
    cout << "5. Перейти к зверушкам" << endl;
    cout << "6. Выйти из игры" << endl;
    cout << "-----------------------------------" << endl;
};

void PrintAnimalmenu(string mainname, int i) {
    cout << "-----------------------------------" << endl;
    cout << "Зверушка: " << mainname << endl;
    cout << "1. Дать/Поменять кличку" << endl;
    cout << "2. Покормить зверушку" << endl;
    cout << "3. Помыть зверушку" << endl;
    cout << "4. Проверить зверушку" << endl;
    cout << "5. Следующая зверушка" << endl;
    cout << "6. Закончить день" << endl;
    cout << "-----------------------------------" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    string mainname[8] = {"Без имени","Без имени","Без имени","Без имени" ,"Без имени" ,"Без имени","Без имени" ,"Без имени"};
    bool mainhunger[8] = { true,true,false,false,false,false,false,false };
    bool mainpurity[8] = { false,false, true, true, true, true, true, true };
    int h[8] = {0,0,0,0,0,0,0,0};
    int i = 0;
    int choice;
    int maxAnimal= 1;
    
    Zoo zoo;
    Animal An1;
    Animal An2;
    Animal An3;
    Animal An4;
    Animal An5;
    Animal An6;
    Animal An7;
    Animal An8;
    
    cout<< "Добро пожаловать в ЗоопаркМПТ" << endl;
    do
    {
        do
            {
            
            PrintCagemenu();
            cin >> choice;
            if (choice == 1) {
                zoo.ShowStatus();
            }
            else if (choice == 2) {
                zoo.ClearStatus();
            }
            else if (choice == 3) {
                cout << "(Укажите номер карты, срок действия и 3 чифры на обороте^-^)" << endl;
            }
            else if (choice == 4) {
                zoo.AddAnimal(maxAnimal);
            }
            else if (choice == 6) { cout << "До встречи!" << endl; exit(0);}
         }      
        while (choice != 5);

        do {
            PrintAnimalmenu(mainname[i], i);
            cin >> choice;
                if (choice == 1) {
                    if (i == 0) {
                        cout << "Какую кличку хотите дать зверушке?" << endl;
                        cin >> mainname[i];
                        An1.AddName(mainname[i]);
                    }

            else if (i == 1) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An2.AddName(mainname[i]);
            }

            else if (i == 2) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An3.AddName(mainname[i]);
            }

            else if (i == 3) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An4.AddName(mainname[i]);
            }

            else if (i == 4) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An5.AddName(mainname[i]);
            }

            else if (i == 5) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An6.AddName(mainname[i]);
            }

            else if (i == 6) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An7.AddName(mainname[i]);
            }
            else if (i == 7) {
                cout << "Какую кличку хотите дать зверушке?" << endl;
                cin >> mainname[i];
                An8.AddName(mainname[i]);
            }
        }


        else if (choice == 2) {
            if (i == 0) {
                cout << "Вы покормили "<< An1.name << endl;
                An1.Eat(mainhunger[i]);}

            else if (i == 1) {
                cout << "Вы покормили " << An2.name << endl;
                An2.Eat(mainhunger[i]);
            }
            else if (i == 2) {
                cout << "Вы покормили " << An3.name << endl;
                An3.Eat(mainhunger[i]);
            }
            else if (i == 3) {
                cout << "Вы покормили " << An4.name << endl;
                An4.Eat(mainhunger[i]);
            }
            else if (i == 4) {
                cout << "Вы покормили " << An5.name << endl;
                An5.Eat(mainhunger[i]);
            }
            else if (i == 5) {
                cout << "Вы покормили " << An6.name << endl;
                An6.Eat(mainhunger[i]);
            }
            else if (i == 6) {
                cout << "Вы покормили " << An7.name << endl;
                An7.Eat(mainhunger[i]);
            }
            else if (i == 7) {
                cout << "Вы покормили " << An8.name << endl;
                An8.Eat(mainhunger[i]);
            }
        }


        else if (choice == 3) {
            if (i == 0) {
                cout << "Вы помыли " << An1.name << endl;
                An1.Wash(mainpurity[i]);
            }
            else if (i == 1) {
                cout << "Вы помыли " << An2.name << endl;
                An2.Wash(mainpurity[i]);
            }
            else if (i == 2) {
                cout << "Вы помыли " << An3.name << endl;
                An3.Wash(mainpurity[i]);
            }
            else if (i == 3) {
                cout << "Вы помыли " << An4.name << endl;
                An4.Wash(mainpurity[i]);
            }
            else if (i == 4) {
                cout << "Вы помыли " << An5.name << endl;
                An5.Wash(mainpurity[i]);
            }
            else if (i == 5) {
                cout << "Вы помыли " << An6.name << endl;
                An6.Wash(mainpurity[i]);
            }
            else if (i == 6) {
                cout << "Вы помыли " << An7.name << endl;
                An7.Wash(mainpurity[i]);
            }
            else if (i == 7) {
                cout << "Вы помыли " << An8.name << endl;
                An8.Wash(mainpurity[i]);
            }
        }


        else if (choice == 4) {
            if (i == 0) { An1.Show(mainname[i], mainhunger[i], mainpurity[i]); }
            else if (i == 1) { An2.Show(mainname[i], mainhunger[i], mainpurity[i]);}
            else if (i == 2) { An3.Show(mainname[i], mainhunger[i], mainpurity[i]);}
            else if (i == 3) { An4.Show(mainname[i], mainhunger[i], mainpurity[i]);}
            else if (i == 4) { An5.Show(mainname[i], mainhunger[i], mainpurity[i]);}
            else if (i == 5) { An6.Show(mainname[i], mainhunger[i], mainpurity[i]);}
            else if (i == 6) { An7.Show(mainname[i], mainhunger[i], mainpurity[i]);}
            else if (i == 7) { An8.Show(mainname[i], mainhunger[i], mainpurity[i]);}
        }

        else if (choice == 5) {
                if (i < maxAnimal) { i++; }
                else if (i==maxAnimal){ i = 0; };
            }

        } while (choice != 6);
        
        if (mainhunger[0] == true) { h[0]++; if (h[0] == 3) { zoo.Death(maxAnimal); mainname[0] = "Без имени";} }
        else if (mainhunger[0] == false) {h[0] = 0;}

        if (mainhunger[1] == true) {h[1]++; if (h[1] == 3) { zoo.Death(maxAnimal); mainname[1] = "Без имени"; } }
        else if (mainhunger[1] == false) {h[1] = 0;}

        if (mainhunger[2] == true) {h[2]++; if (h[2] == 3) { zoo.Death(maxAnimal); mainname[2] = "Без имени"; }}
        else if (mainhunger[2] == false) {h[2] = 0;}

        if (mainhunger[3] == true) {h[3]++; if (h[3] == 3) { zoo.Death(maxAnimal); mainname[3] = "Без имени"; }}
        else if (mainhunger[3] == false) {h[3] = 0;}

        if (mainhunger[4] == true) {h[4]++; if (h[4] == 3) { zoo.Death(maxAnimal); mainname[4] = "Без имени"; }}
        else if (mainhunger[4] == false) {h[4] = 0;}

        if (mainhunger[5] == true) {h[5]++; if (h[5] == 3) { zoo.Death(maxAnimal); mainname[5] = "Без имени"; }}
        else if (mainhunger[5] == false) {h[5] = 0;}

        if (mainhunger[6] == true) {h[6]++; if (h[6] == 3) { zoo.Death(maxAnimal); mainname[6] = "Без имени"; }}
        else if (mainhunger[6] == false) {h[6] = 0;}

        if (mainhunger[7] == true) {h[7]++; if (h[7] == 3) { zoo.Death(maxAnimal); mainname[7] = "Без имени"; }}
        else if (mainhunger[7] == false) {h[7] = 0;}

        if ((mainhunger[0] == false && mainhunger[1] == false) && (mainpurity[0] == true && mainpurity[1] == true)) 
        {
            zoo.Mating(maxAnimal);
        }

        zoo.StatusDef();
        for (i = 0; i < maxAnimal; i++)
        {
            mainhunger[i] = true;
            mainpurity[i] = false;
        }
    i = 0;

   }while (true);
}

