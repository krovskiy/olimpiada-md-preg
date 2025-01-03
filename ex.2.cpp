#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile("suma.in");
    ofstream outfile("suma.out");

    if (!infile || !outfile) {
        return 1;
    }

    int n, a, s = 0;
    infile >> n;
    for (int i = 0; i < n; i++) {
        infile >> a;
        s += a;
    }

    outfile << s;

    infile.close();
    outfile.close();
    return 0;
}