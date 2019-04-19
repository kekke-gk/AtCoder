A, B, Q = map(int, input().split())

INF = 10e16

ss = [-INF] + [int(input()) for _ in range(A)] + [INF]
ts = [-INF] + [int(input()) for _ in range(B)] + [INF]
xs = [int(input()) for _ in range(Q)]

import numpy as np

ss = np.array(ss)
ts = np.array(ts)


def near(l, v):
    diff = l - v
    absd = np.abs(diff)
    idx = absd.argmin()
    if diff[idx] > 0:
        return absd[idx-1], absd[idx]
    else:
        return absd[idx], absd[idx+1]

for x in xs:
    sl, sh = near(ss, x)
    tl, th = near(ts, x)

    p1 = max(sl, tl)
    p2 = max(sh, th)
    p3 = 2*sl + th if sl < th else sl + 2*th
    p4 = 2*tl + sh if tl < sh else tl + 2*sh

    print(int(min(p1, p2, p3, p4)))
