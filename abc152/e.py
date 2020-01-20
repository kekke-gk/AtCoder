import numpy as np

N = int(input())
A = np.array([int(n) for n in input().split()], dtype=np.uint64)

lcm = np.lcm.reduce(A)

print(int((lcm // A).sum() % (pow(10, 9) + 7)))
