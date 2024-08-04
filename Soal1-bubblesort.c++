#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan data nama dan alamat
struct Data {
    string nama;
    string alamat;
};

// Fungsi untuk mengurutkan data menggunakan Bubble Sort
void bubbleSort(vector<Data>& data) {
    int n = data.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (data[j].nama > data[j+1].nama) {
                swap(data[j], data[j+1]);
            }
        }
    }
}

// Fungsi untuk mencetak data
void printData(const vector<Data>& data) {
    for (const auto& d : data) {
        cout << d.nama << "\t" << d.alamat << endl;
    }
}

int main() {
    // Data awal
    vector<Data> data = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    // Mengurutkan data menggunakan Bubble Sort
    bubbleSort(data);

    // Mencetak data setelah diurutkan
    cout << "Hasil Pengurutan Bubble Sort:" << endl;
    printData(data);

    return 0;
}
