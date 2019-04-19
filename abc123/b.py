L = [int(input()) for i in range(5)]
M = [l if l % 10 == 0 else (l // 10 + 1) * 10 for l in L]

d = 0
for l, m in zip(L, M):
    d = max(d, m - l)

print(sum(M) - d)
