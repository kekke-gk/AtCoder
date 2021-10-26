H, W = map(int, input().split())
S = [list(input()) for h in range(H)]

cnt = 0

for r in S:
    for i in range(len(r) - 1):
        if r[i] == r[i+1] == '.':
            cnt += 1

for i in range(len(S[0])):
    for j in range(len(S) - 1):
        if S[j][i] == S[j+1][i] == '.':
            cnt += 1

print(cnt)