N = int(input())
S = input()

idxw = -1
idxb = -1
for i in range(N-1, -1, -1):
    if S[i] == '.':
        idxw = i
        break

for i in range(N):
    if S[i] == '#':
        idxb = i
        break

if idxw == -1 or idxb == -1:
    print(0)
else:
    cntw = S[:idxw].count('#')
    cntb = S[idxb:].count('.')

    print(min(cntw, cntb))
