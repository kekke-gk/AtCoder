#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

template<typename T>
istream& operator >> (istream& is, vector<T>& vec){
  for(T& x: vec) is >> x;
  return is;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    cin >> A;

    int n = 0, z = 0;
    unsigned long m = INF, S = 0;
    for (int i = 0; i < N; i++) {
        S += abs(A[i]);
        if(A[i] < 0) n++;
        if(A[i] == 0) z = 1;
        if(m > abs(A[i])) m = abs(A[i]);
    }

    if(z || n % 2 == 0){
        printf("%lu\n", S);
    }else{
        printf("%lu\n", S - 2*m);
    }
}
