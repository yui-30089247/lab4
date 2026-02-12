#include <iostream>

using namespace std;

void findMinAndMax(const int arr[], int size, int* min, int* max);

int main() {
    int numbers[10] = {4, 1, 9, 3, 10, 8, 22, 45, 11, -50};
    int min = numbers[0];
    int max = numbers[0];

    findMinAndMax(numbers, 10, &min, &max);
    cout << "The minimum value is " << min << endl;
    cout << "The minimum value is " << max << endl;
}

void findMinAndMax(const int arr[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}