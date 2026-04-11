#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <iomanip> 

using namespace std;


double calculate_entropy(const string &text) {
    if (text.empty()) return 0.0;

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    double total_chars = static_cast<double>(text.size());
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / total_chars;
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text) {
    if (text.empty()) return 0.0;
    
    double h_x = calculate_entropy(text);
    double max_h = 8.0; 
    return max_h - h_x;
}

int main() {
    string input;
    if (!getline(cin, input)) return 0;

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << fixed << setprecision(3);
    cout << "Entropy: " << entropy << '\n';
    cout << "Redundancy: " << redundancy << '\n';
    
    return 0;
}