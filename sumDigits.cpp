//
// Created by Alberto Cipresso on 01/04/20.
//

#include <string>

using namespace std;


int sumOfDigits(int n) {
    string s = to_string(n);

    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        sum += s[i] - 48;
    }

    return sum;
}

int sumOfDigits(int n, int arr[], int nDigits) {
    int dix1 = 1;
    int dix2 = 10;
    for (int i = 0; i < nDigits; ++i) {
        arr[i] = (n % dix2) / dix1;
        // 1234 -> % 10 = 4 --> / 1 --> 4
        dix1 *= 10;
        dix2 *= 10;
    }

    int sum = 0;
    for (int j = 0; j < nDigits; ++j) {
        sum += arr[j];
    }

    return sum;
}
