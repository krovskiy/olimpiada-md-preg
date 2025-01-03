#include <iostream>
#include <vector>
using namespace std;


int main(){
 int K, N;
    cout << "nr roboti=";
    cin >> K;
    cout << "nr de ani=";
    cin >> N;

    vector<long> A(3, 0);
    A[0] = K;
    long Nt = K;

    for (int i = 1; i <= N; ++i) {
        long X = 0, Y = 0, Rb = Nt;
        while ((Rb % 3 != 0) && (Rb > 0)) {
            Y += 1;
            Rb -= 5;
        }
        if (Rb > 0) {
            X = Rb / 3;
        }
        A[2] = A[1];
        A[1] = A[0];
        A[0] = 5 * X + 9 * Y;
        Nt = A[0] + A[1] + A[2];
    }

    cout << "nr total=" << Nt << endl;
    return 0;
}