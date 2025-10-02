#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void bubbleSort(vector<int>& array) {
    int arraySize = array.size();

    for (int i = 0; i < arraySize - 1; i++) {
        for (int j = 0; j < arraySize - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void tampilkanArray(const vector<int>& array, const string& pesan) {
    cout << pesan;
    for (int i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== Program Bubble Sort dengan Input User ===" << endl;
    
    char lanjut = 'y';
    
    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "\n--- Input Array Baru ---" << endl;
        
        cout << "Masukkan elemen array (pisahkan dengan spasi): ";
        string input;
        getline(cin, input);
        
        vector<int> array;
        stringstream ss(input);
        int num;
        
        while (ss >> num) {
            array.push_back(num);
        }
        
        if (array.empty()) {
            cout << "Array kosong! Masukkan setidaknya satu elemen." << endl;
            continue;
        }
        
        tampilkanArray(array, "Array sebelum diurutkan: ");
        
        bubbleSort(array);
        
        tampilkanArray(array, "Array setelah diurutkan: ");
        
        cout << "\nApakah ingin mengurutkan array lain? (y/n): ";
        cin >> lanjut;
        cin.ignore();
    }
    
    cout << "\nTerima kasih telah menggunakan program!" << endl;
    return 0;
}