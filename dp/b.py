N, K = map(int, input().split())
h = [int(i) for i in input().split()]
ran = range(1, K+1)

dp = [0] * N

for i in range(1, N):
    dp[i] = min([dp[i-k] + abs(h[i] - h[i-k]) for k in ran if i-k >= 0])

print(dp[-1])
