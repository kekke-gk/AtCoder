import math as m

N = int(input())
x = []
y = []
for i in range(N):
    xt, yt = map(int, input().split())
    x.append(xt)
    y.append(yt)

print(x)
print(y)

cnt = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            s = abs((x[i]+x[k])*(y[j]+y[k])-(y[i]+y[k])*(x[j]+x[k]))
            if s != 0 and s % 2 == 0:
                cnt += 1

print(cnt)
