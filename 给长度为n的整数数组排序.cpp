#include <iostream>

using namespace std;

void sort(int *array, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int *array = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    sort(array, n);

    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << array[i];
    }

    delete[] array;
    return 0;
}
