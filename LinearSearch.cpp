#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

void analyzeLinearSearch(int n, ofstream &file) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int bestcase = INT_MAX, worstcase = INT_MIN, sum = 0;
    int key;

    for (int i = 1; i <= n; i++) {
        key = i;
        int count = 0;
        for (int j = 0; j < n; j++) {
            count++;
            if (arr[j] == key) {
                break;
            }
        }

        bestcase = min(bestcase, count);
        worstcase = max(worstcase, count);
        sum += count;
    }

    int averagecase = sum / n;
    file << n << "," << bestcase << "," << worstcase << "," << averagecase << endl;
}

int main() {
    ofstream file("results.txt");
    file << "ArraySize,BestCase,WorstCase,AverageCase" << endl;
    for (int n = 10; n <= 1000; n *= 10) {
        analyzeLinearSearch(n, file);
    }
    file.close();
    cout << "Results saved to results.txt" << endl;
    return 0;
}
