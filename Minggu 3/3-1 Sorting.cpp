#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> array) {
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

    return array;
}

int main() {
    vector<int> arrayUnsorted = {5, 3, 8, 4, 2};

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < arrayUnsorted.size(); i++) {
        cout << arrayUnsorted[i] << " ";
    }
    cout << endl;

    vector<int> arraySorted = bubbleSort(arrayUnsorted);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < arraySorted.size(); i++) {
        cout << arraySorted[i] << " ";
    }
    cout << endl;

    return 0;
}