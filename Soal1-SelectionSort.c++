#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan data nama dan alamat
struct Data {
    string nama;
    string alamat;
};

// Fungsi untuk mengurutkan data menggunakan Selection Sort
void selectionSort(vector<Data>& data) {
    int n = data.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (data[j].nama < data[minIndex].nama) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
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

    // Mengurutkan data menggunakan Selection Sort
    selectionSort(data);

    // Mencetak data setelah diurutkan
    cout << "Hasil Pengurutan Selection Sort:" << endl;
    printData(data);

    return 0;
}
