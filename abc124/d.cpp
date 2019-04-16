#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

int main() {
    int N, K;
    char S[100000] = {0};
    int L[200001] = {0};

    cin >> N >> K;

    cin >> S;

    int idx = 1;
    int cnt = 1;
    char prev = S[0];
    for (int i = 1; i < N; i++) {
        if(prev == S[i]){
            cnt++;
        }else{
            L[idx] = cnt;
            cnt = 1;
            idx++;
            prev = S[i];
        }
    }

    L[idx] = cnt;
    idx++;

    int first = (S[0] == '0') ? 0 : 1;
    int m = 0;
    for(int i = first; i < idx; i += 2){
        int tmp = accumulate(L + i, L + i + (2 * K + 1), 0);
        m = max(m, tmp);
    }

    printf("%d\n", m);
}
