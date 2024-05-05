#include <iostream>
#include <time.h>
using namespace std;
static void bubbleSort(int arr[], int size) {
    int temp;
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }        cout << endl;
        for (int j = size - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                count++;
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
        if (!count) {
            break;
        }
        count = 0;
    }
}


int main() {
    setlocale(LC_ALL, "ru");

    const int size = 10;

    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    bubbleSort(arr, size);
    return 0;
} 