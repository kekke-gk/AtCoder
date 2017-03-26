N = int(input())
K = int(input())
X = int(input())
Y = int(input())

r = 0
if N < K:
    r = N * X
else:
    r = K * X + (N - K) * Y
print(r)
