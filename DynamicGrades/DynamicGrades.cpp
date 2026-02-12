#include <iostream>
#include <iomanip>

using namespace std;

void getScores(double *arr, int size);
void sortScores(double *arr, int size);
double calculateAverage(const double *arr, int size);

int main() {
    int numScores;

    cout << "How many test scores do you want to process? ";
    cin >> numScores;

    if (numScores < 0) {
        cout << "Enter a positive number." << endl;
    } else {
        double *scorePtr = nullptr;
        scorePtr = new double[numScores];
    
        getScores(scorePtr, numScores);
        cout << "The sorted scores are: ";
        cout << setprecision(2) << fixed;
        sortScores(scorePtr, numScores);
        for (int i = 0; i < numScores; i++) {
            cout << scorePtr[i] << " ";
        }
        cout << endl;
        cout << "The average score is: " << calculateAverage(scorePtr, numScores) << endl;
    }

    return 0;
}

void getScores(double *arr, int size) {
    for (int i = 0; i < size; i++) {   
        double score; 
        cout << "Enter a score " << (i+1) << ": ";
        cin >> score;
        while (score < 0) {
            cout << "Enter a positive number: ";
            cin >> score;
        }
        arr[i] = score;    
    }
}

void sortScores(double *arr, int size) {
    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                double temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

double calculateAverage(const double *arr, int size) {
    double sum = 0;
    double average = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = sum / size;
    return average;
}