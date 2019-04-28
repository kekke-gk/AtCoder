#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

template<typename T>
istream& operator >> (istream& is, vector<T>& vec){
  for(T& x: vec) is >> x;
  return is;
}

int gcd(int x, int y) {return __gcd(x, y);}

int main() {
    int N;
    cin >> N;
    vector<int> A(N), L(N), R(N);
    cin >> A;

    L[0] = 0;
    R[N] = 0;
    for (int i = 1; i < N; i++) {
        L[i] = gcd(L[i-1], A[i-1]);
        R[N-i] = gcd(R[N-i+1], A[N-i]);
    }

    int m = 0;
    for (int i = 0; i < N; i++) {
        m = max(m, gcd(L[i], R[i+1]));
    }
    cout << m << endl;
}
