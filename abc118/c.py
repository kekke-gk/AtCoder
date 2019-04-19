N = int(input())
A = [int(i) for i in input().split()]

import numpy as np
A = np.array(sorted(A))

while(True):
    A[1:] %= A[0]
    A = np.unique(A)
    A = np.delete(A, np.where(A == 0))
    if len(A) == 1:
        break

    A.sort()

print(A[0])
