#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void generateArray(int a[], int size, int index = 0) {
    if (index == size) return;
    a[index] = rand() % 46 - 10;
    generateArray(a, size, index + 1);
}

void printArray(const int a[], int size, int index = 0) {
    if (index == size) {
        cout << endl;
        return;
    }
    cout << a[index] << " ";
    printArray(a, size, index + 1);
}

int countElements(const int a[], int size, int index = 0) {
    if (index == size) return 0;
    return ((a[index] >= 0 || a[index] % 3 != 0)? 1 : 0) + countElements(a, size, index + 1);
}

int sumElements(const int a[], int size, int index = 0) {
    if (index == size) return 0;
    return ((a[index] >= 0 || a[index] % 3 != 0) ? a[index] : 0) + sumElements(a, size, index + 1);
}

void replaceElements(int a[], int size, int index = 0) {
    if (index == size) return;
    if ((a[index] >= 0 || a[index] % 3 != 0)) {
        a[index] = 0;
    }
    replaceElements(a, size, index + 1);
}

int main() {
    const int SIZE = 22;
    srand((unsigned)time(NULL));
    int a[SIZE];

    generateArray(a, SIZE);

    printArray(a, SIZE);

    cout << "count of elements: " << countElements(a, SIZE) << endl;
    cout << "sum of elements: " << sumElements(a, SIZE) << endl;

    replaceElements(a, SIZE);

    printArray(a, SIZE);

    return 0;
}