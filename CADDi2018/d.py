N = int(input())

res = 'second'

for _ in range(N):
    a = int(input())
    if a % 2 == 1:
        res = 'first'

print(res)
