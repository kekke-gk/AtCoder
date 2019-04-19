N = int(input())
P = [int(i) for i in input().split()]

## Brute force
# import numpy as np
# P = np.array(P)
# def b2i(b, l):
#     return np.array([int(v) for v in format(b, '0{}b'.format(l))])
#
# print(len(set([(b2i(i, len(p)) * P).sum() for i in range(pow(2, N))])))

# DP
res = set([0])

for p in P:
    tmp = set()
    for a in res:
        tmp.add(p + a)

    res |= tmp

print(len(res))
