N, K = map(int, input().split())
S = input()

S2 = [S[i].lower() if i == K-1 else S[i] for i in range(N)]

print(''.join(S2))
