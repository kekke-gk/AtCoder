#include <bits/stdc++.h>

#define INF (1e9)

using namespace std;

int main() {
    int N, K;
    int *h, *dp;

    scanf("%d %d", &N, &K);

    h = (int*)malloc(N * sizeof(*h));
    dp = (int*)malloc(N * sizeof(*dp));

    for (int i = 0; i < N; i++) {
        scanf("%d", h + i);
        dp[i] = 0;
    }

    for (int i = 1; i < N; i++) {
        int m = INF;
        for (int k = 1; k < K + 1; k++) {
            if(i - k < 0) continue;
            m = min(m, dp[i-k] + abs(h[i] - h[i-k]));
        }
        dp[i] = m;
    }

    printf("%d\n", dp[N-1]);
}
