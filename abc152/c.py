N = int(input())
P = list(map(int, input().split()))

mi = P[0]
cnt = 0

for i in range(N):
    if P[i] <= mi:
        mi = P[i]
        cnt += 1

print(cnt)
