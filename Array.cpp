#include <iostream>
using namespace std;

// Mendeklarasikan array tanpa ukuran, wajib diberi nilai awal
int nilai[] = {1, 2, 3};

// Mendeklarasikan array dengan ukuran dan diberi nilai awal
string nama[5] = {"ben", "agus", "fara", "ama", "akila"};

// Mendeklarasikan array dengan ukuran dan tanpa nilai awal
float score[5];

int main()
{
    cout << "Nama pada index 4 adalah " << nama[4] << endl;
    // memberi nilai pada elemen array per index
    nama[4] = "Hani";
    cout << "Nama pada index 4 adalah " << nama[4] << endl;

    cout << "inputscore" << endl;
    cout << endl;

    // memberi nilai array dengan looping
    for (int i = 0; i < 5; i++)
    {
        cout << "score ke-" << i + 1 << " =";
        cin >> score[i];
    }

    cout << "Tampilkan skor" << endl;
    cout << endl;

    // memberi nilai array dengan looping for
    for (int i = 0; i < 5; i++)
    {
    }
}