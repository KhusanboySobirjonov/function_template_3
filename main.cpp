#include <iostream>
using namespace std;
template <class X> void SortInc3(X A, X B, X C) {
    X Max, Sum;
    Sum = A + B + C;
    Max = A;
    if (A > B) A = B; else Max = B;
    if (A > C) A = C;
    if (Max < C) Max = C;
    cout << A << "," << Sum - Max - A << "," << Max << endl;
}
int main()
{
    float A , B , C;
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;
    SortInc3<float>(A,B,C);
    return 0;
}

