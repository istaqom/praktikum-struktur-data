#include <iostream>
#include <vector>

using namespace std;

// Catatan: Binary Search butuh data TERURUT (ascending)
// Jika data TIDAK berurut:
// - Invarian algoritma (elemen kiri < target < elemen kanan) rusak.
// - Perbandingan di titik tengah tidak lagi memotong ruang cari dengan benar.
// - Hasil pencarian menjadi TIDAK VALID (bisa salah indeks atau -1 padahal ada).
// Solusi: urutkan dulu (mis. pakai sort yang sudah diajarkan) atau gunakan linear search.

int binarySearchIteratif(const vector<int>& arr, int target) {
    int l = 0, r = static_cast<int>(arr.size()) - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2; // hindari overflow
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int binarySearchRekursifHelper(const vector<int>& arr, int l, int r, int target) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearchRekursifHelper(arr, mid + 1, r, target);
    return binarySearchRekursifHelper(arr, l, mid - 1, target);
}

int binarySearchRekursif(const vector<int>& arr, int target) {
    return binarySearchRekursifHelper(arr, 0, static_cast<int>(arr.size()) - 1, target);
}

// Variasi: first occurrence (indeks pertama)
int binarySearchFirst(const vector<int>& arr, int target) {
    int l = 0, r = static_cast<int>(arr.size()) - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= target) {
            if (arr[mid] == target) ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

// Variasi: last occurrence (indeks terakhir)
int binarySearchLast(const vector<int>& arr, int target) {
    int l = 0, r = static_cast<int>(arr.size()) - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= target) {
            if (arr[mid] == target) ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    cout << "=== Binary Search (Iteratif & Rekursif) ===\n";
    vector<int> data = {1, 2, 2, 2, 3, 5, 7, 9}; // TERURUT

    int target = 2;
    cout << "Iteratif index angka " << target << ": " << binarySearchIteratif(data, target) << '\n';
    cout << "Rekursif index angka " << target << ": " << binarySearchRekursif(data, target) << '\n';
    cout << "First index angka " << target << ": " << binarySearchFirst(data, target) << '\n';
    cout << "Last index angka " << target << ": " << binarySearchLast(data, target) << '\n';

    cout << "Tidak ditemukan angka 4: " << binarySearchIteratif(data, 4) << '\n';
    return 0;
}


