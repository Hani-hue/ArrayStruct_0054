#include <iostream>
#include <string>
using namespace std;

struct Weapon
{
    string name;
    int damage;
};

struct Player
{
    string name;
    string id;
    string level;
    Weapon weapon;
};

int main()
{
    Player honk[3];
    for (int i = 0; i < 3; i++)
    {
        cout << " Masukkan nama player=";
        getline(cin, honk[i].name);
        cout << "Masukkan id= ";
        cin >> honk[i].id;
        cout << "Masukkan level player= ";
        cin >> honk[i].level;
        cin.ignore();
        cout << "Masukkan Weapon=";
        getline(cin, honk[i].weapon.name);
        cout << "Masukkan damage=";
        cin >> honk[i].weapon.damage;
    }
    for (int i = 0; i < 3; i++)
    {

        cout << "Tampilkan Player" << endl;
        cout << "Nama Player=" << honk[i].name << endl;
        cout << "Id Player=" << honk[i].id << endl;
        cout << "Level Player=" << honk[i].level << endl;
        cout << "Weapon Player=" << honk[i].weapon.name << endl;
        cout << "Damage Weapon=" << honk[i].weapon.damage << endl;
    }
}