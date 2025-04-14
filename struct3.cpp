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
    Player honk;
    cout << " Masukkan nama player=";
    getline(cin, honk.name);
    cout << "Masukkan id= ";
    cin >> honk.id;
    cout << "Masukkan level player= ";
    cin >> honk.level;
    cin.ignore();
    cout << "Masukkan Weapon=";
    getline(cin, honk.weapon.name);
    cout << "Masukkan damage=";
    cin >> honk.weapon.damage;

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player=" << honk.name << endl;
    cout << "Id Player=" << honk.id << endl;
    cout << "Level Player=" << honk.level << endl;
    cout << "Weapon Player=" << honk.weapon.name << endl;
    cout << "Damage Weapon=" << honk.weapon.damage << endl;
}