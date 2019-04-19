#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

int main() {
    // map<int, int> idxes;
    // idxes[3] = 10;
    int N, Q;
    int sum = 0;
    int *c;
    char *s;
    // char *t, *d;
    char t, d;

    scanf("%d %d", &N, &Q);
    cin >> s;
    // scanf("%s", s);

    printf("%s\n", s);

    // map<string, vector<int>> idx;

    // for (int i = 0; i < N; i++) {
    //     if(idx.find(s[i]) != idx.end()){
    //         idx[s[i]].push_back(i);
    //     }else{
    //         vector<int> tmp(1, i);
    //         idx.insert(make_pair(s[i], tmp));
    //     }
    // }
    //
    // c = (int *)malloc(N * sizeof(*c));
    // for (int i = 0; i < N; i++) {
    //     c[i] = 1;
    // }
    // // t = (char *)malloc(Q * sizeof(*t));
    // // d = (char *)malloc(Q * sizeof(*d));
    //
    // for (int i = 0; i < Q; i++) {
    //     cin >> t >> d;
    //     // cin >> t + i >> d + i;
    //     if (d == 'L'){
    //         for (int id : idx[t]){
    //             if(id == 0)
    //                 sum += c[id];
    //             else
    //                 c[id-1] += c[id];
    //             c[id] = 0;
    //         }
    //     }else{
    //         for(int j = idx[t].size()-1; j >= 0; j--){
    //             int id = idx[t][j];
    //             if(id == N - 1)
    //                 sum += c[id];
    //             else
    //                 c[id+1] += c[id];
    //             c[id] = 0;
    //         }
    //     }
    // }

    // printf("%s\n", s);
    // printf("%s\n", t);
    // printf("%s\n", d);


    // for (int i = 1; i < N; i++) {
    //     int m = INF;
    //     for (int k = 1; k < K + 1; k++) {
    //         if(i - k < 0) continue;
    //         m = min(m, dp[i-k] + abs(h[i] - h[i-k]));
    //     }
    //     dp[i] = m;
    // }
    //
    // printf("%d\n", dp[N-1]);
    printf("%d\n", sum);
}
