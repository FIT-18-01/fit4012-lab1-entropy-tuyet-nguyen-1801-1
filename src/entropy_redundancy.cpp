#include <iostream>
#include <map>
#include <cmath>
using namespace std;

// Q1: tính entropy
double calculate_entropy(string s) {
    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    double entropy = 0.0;
    int n = s.length();

    for (auto pair : freq) {
        double p = (double)pair.second / n;
        entropy += -p * log2(p);
    }

    return entropy;
}

// Q2: tính redundancy
double calculate_redundancy(double entropy) {
    double max_entropy = log2(256); // ASCII
    return max_entropy - entropy;
}

int main() {
    string s;

    cout << "Nhap chuoi: ";
    cin >> s;

    double entropy = calculate_entropy(s);
    double redundancy = calculate_redundancy(entropy);

    cout << "Entropy: " << entropy << endl;
    cout << "Redundancy: " << redundancy << endl;

    return 0;
}
