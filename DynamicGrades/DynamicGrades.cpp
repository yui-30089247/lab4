#include <iostream>

using namespace std;

int main() {
    int numScores;

    cout << "How many test scores do you want to process? ";
    cin >> numScores;

    if (numScores < 0) {
        cout << "Enter a positive number." << endl;
        return;
    }

    double *scorePtr = nullptr;
    scorePtr = new double[numScores];
}

void getScores(double *arr, int size) {
    for (int i = 0; i < size; i++) {   
        double score; 
        cout << "Enter a score: ";
        cin >> score;
        if (score < 0) {
            cout << "Enter a positive number." << endl;
            break; 
        } else {
            arr[i] = score;
        }     
    }
}

void sortScores(double *arr, int size) {

}