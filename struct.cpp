#include <iostream>
#include <string>
using namespace std;

struct Player
{
    string name;
    string id;
    string level;
};

int main()
{
    Player honk;
    cout << " Masukkan nama player=";
    getline(cin, honk.name);
    cout << "Masukkan id= ";
    getline(cin, honk.id);
    cout << "Masukkan level player= ";
    getline(cin, honk.level);

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player=" << honk.name << endl;
    cout << "Id Player=" << honk.id << endl;
    cout << "Level Player=" << honk.level << endl;
}