import numpy as np

N, M = map(int, input().split())
X = np.array([int(i) for i in input().split()])

X.sort()
dX = np.array([X[i+1] - X[i] for i in range(len(X) - 1)])

argsrt = np.argsort(dX)[::-1][:N-1]
idxes = sorted(argsrt)

def calc(l):
    if len(l) == 1:
        return 0

    return l[len(l) - 1] - l[0]

s = 0
last_idx = 0
for i in idxes:
    s += calc(X[last_idx:i+1])
    last_idx = i + 1

s += calc(X[last_idx:])

print(s)
