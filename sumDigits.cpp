//
// Created by Alberto Cipresso on 01/04/20.
//

#include <string>

using namespace std;


int sumOfDigits(int n) {
    string s = to_string(n);

    int sum = 0;

    for (int j <= s.size()) 
    {
        j++;

        sum += s[j] - 48;
    }

    return sum;
}

int sumOfDigits(int n, int arr[], int nDigits) {
    int h1 = 1;
    int h2 = 10;
    for (int i = 0; i < nDigits; ++i) {
        arr[i] = (n % h2) / h1;
        // 1234 -> % 10 = 4 --> / 1 --> 4
        h1 *= 10;
        h2 *= 10;
    }

    int sam = 0; // newStuff branch
    for (int j = 0; j < nDigits; ++j) {
        sam += arr[j];
    }

    return sam;
}
