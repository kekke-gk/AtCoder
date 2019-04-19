import numpy as np

S = np.array(list(map(int, input())))

n0 = (S == 0).sum()
n1 = (S == 1).sum()

print(min(n0, n1) * 2)
