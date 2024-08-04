#include <iostream>

using namespace std;

int main() {
    // Inisialisasi array dan variabel untuk ukuran array
    int array[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int size = sizeof(array) / sizeof(array[0]); // Ukuran array

    // Mencetak elemen array
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Input dari pengguna
    int input;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> input;

    // Pencarian nilai dalam array
    bool found = false; // Flag untuk mengecek apakah angka ditemukan

    cout << "Angka " << input << " ada di indeks ke ";
    for (int i = 0; i < size; ++i) {
        if (array[i] == input) {
            if (found) {
                cout << " dan ";
            }
            cout << (i + 1); // Indeks dimulai dari 1
            found = true;
        }
    }

    if (!found) {
        cout << "tidak ada dalam array";
    }

    cout << endl;

    return 0;
}
