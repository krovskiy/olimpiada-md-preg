#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile("texte.in");
    ofstream outfile("texte.out");

    if (!infile || !outfile) {
        return 1;
    }

    int n = 0;
    char c;
    string T;
    infile >> c;
    infile.ignore();
    getline(infile, T);
    cout << T << endl;
    for (int i = 0; i < T.size(); i++) {
        if (T[i] == c) {
            n++;
        }
    }
    cout << n << endl;
    return 0;
}