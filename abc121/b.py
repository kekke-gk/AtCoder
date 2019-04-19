import numpy as np

N, M, C = map(int, input().split())
B = np.array([int(b) for b in input().split()])
As = np.array([[int(a) for a in input().split()] for _ in range(N)])

res = np.sum(As * B, axis=1) + C
l = len(np.where(res > 0)[0])

print(l)
