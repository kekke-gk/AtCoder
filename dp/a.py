N = int(input())
h = [int(i) for i in input().split()]

dp = [0] * N

for i in range(1, N):
    if i - 2 < 0:
        dp[i] = dp[i-1] + abs(h[i] - h[i-1])
    else:
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]),
                    dp[i-2] + abs(h[i] - h[i-2]))

print(dp[-1])
