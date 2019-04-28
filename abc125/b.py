N = int(input())
V = [int(i) for i in input().split()]
C = [int(i) for i in input().split()]

print(sum([max(V[i] - C[i], 0) for i in range(N)]))
