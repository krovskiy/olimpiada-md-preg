#include <iostream>
#include <fstream>
using namespace std;

int Factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * Factorial(n - 1);
}



int main() {
    ifstream infile("fact.in");
    ofstream outfile("fact.out");

    if (!infile || !outfile) {
        return 1;
    }

    int n;
    infile >> n;
    outfile << Factorial(n) << endl;
    return 0;
}