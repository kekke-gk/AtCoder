#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

template<typename T>
istream& operator >> (istream& is, vector<T>& vec){
  for(T& x: vec) is >> x;
  return is;
}

int main() {
    int N, K;
    cin >> N >> K;

    double sum = 0;
    for (int i = 1; i <= N; i++) {
        if(i < K){
            sum += pow(0.5, ceil(log2((double)K / i)));
        }else{
            sum++;
        }
    }

    printf("%1.10lf\n", sum / N);
}
