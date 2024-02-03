#include<iostream>
#include<cmath>
using namespace std;
#define MAX 10

int main() {
    int i;
    double a[MAX];
    for(i = 0; i < MAX; i++) {
        cin >> a[i];
    }

    // Calculate mean
    double sum = 0.0;
    for (int i = 0; i < MAX; ++i) {
        sum += a[i];
    }
    double mean = sum / MAX;

    // Calculate standard deviation
    double sumSquaredDiff = 0.0;
    for (int i = 0; i < MAX; ++i) {
        double diff = a[i] - mean;
        sumSquaredDiff += diff * diff;
    }
    double standardDeviation = std::sqrt(sumSquaredDiff / (MAX - 1));
    int g =10;
    cout<< pow(g,2);
    // Output results
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;

    return 0;
}
