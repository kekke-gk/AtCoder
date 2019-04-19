X, Y, Z, K = map(int, input().split())
A = sorted([int(i) for i in input().split()], reverse=True)
B = sorted([int(i) for i in input().split()], reverse=True)
C = sorted([int(i) for i in input().split()], reverse=True)
dA = [A[0] - A[i+1] for i in range(X-1)]
dB = [B[0] - B[i+1] for i in range(Y-1)]
dC = [C[0] - C[i+1] for i in range(Z-1)]

def get(x, y, z):
    s = 0
    if x >= X or y >= Y or z >= Z:
        return None

    s += dA[x-1]
    s += dB[y-1]
    s += dC[z-1]
    return s


import numpy as np

arrived = []
keys = [[np.array([0, 0, 0], dtype=np.int), 0]]

for i in range(K):
    cur = keys.pop(0)
    print(A[cur[0][0]] + B[cur[0][1]] + C[cur[0][2]])
    for v in np.eye(3, dtype=np.int):
        t = get(*(cur[0] + v))
        if t is None or str(cur[0] + v) in arrived:
            continue
        keys.append([cur[0] + v, t])
        arrived.append(str(cur[0] + v))
    keys.sort(key=lambda x: x[1])

