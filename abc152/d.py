N = int(input())

def prefix_postfix(n):
    sn = str(n)
    return int(sn[0]), int(sn[-1])

import numpy as np
cnt = np.zeros((10, 10), np.uint64)

for i in range(1, N+1):
    pair = prefix_postfix(i)
    cnt[pair] += 1

ans = 0

for i in range(10):
    for j in range(10):
        ans += cnt[i, j] * cnt[j, i]

print(int(ans))
