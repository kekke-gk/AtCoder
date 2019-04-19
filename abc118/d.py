N, M = map(int, input().split())
A = sorted([int(i) for i in input().split()])
C = [2, 5, 5, 4, 5, 6, 3, 7, 6]

def f(A):
    if 6 in A and 9 and A:
        A.remove(6)

    n = (2 in A) + (3 in A) + (5 in A)

    if n <= 1:
        return A

    if n == 3:
        A.remove(2)
        A.remove(3)
        return A

    if 2 in A:
        A.remove(2)
        return A

    A.remove(3)
    return A


A = f(A)
vals = [C[a-1] for a in A]

z = sorted(zip(A, vals), key=lambda x:x[1])
A, vals = zip(*z)

import numpy as np
dp = np.zeros([len(A), N+1])

# i番目の商品だけ
# n以下になる場合
def calc(i, n):
    for i in range(len(A)):
        for j in range(N+1):
            dp[i][u] =


def show(d):
    pass

r = N % vals[0]
if r == 0:
    show({str(A[0]): N // vals[0]})

cnt = 1
while(True):
    if vals[0] * cnt + r in A:

