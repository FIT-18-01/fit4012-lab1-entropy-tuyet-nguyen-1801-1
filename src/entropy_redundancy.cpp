#include <iostream>
#include <map>
#include <cmath>
using namespace std;

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

double calculate_redundancy(double entropy) {
    double max_entropy = log2(256);
    return max_entropy - entropy;
}

int main() {
    string s;
    getline(cin, s);

    double entropy = calculate_entropy(s);
    double redundancy = calculate_redundancy(entropy);

    cout << entropy << endl;
    cout << redundancy;

    return 0;
}
