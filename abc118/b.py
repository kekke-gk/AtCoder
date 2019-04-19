N, M = map(int, input().split())
flags = [True] * M

for _ in range(N):
    K, *A = map(int, input().split())
    for i in range(M):
        if (i+1) not in A:
            flags[i] = False

print(flags.count(True))
