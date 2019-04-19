N = int(input())

total = 0
for _ in range(N):
    x, u = input().split()
    if u == 'JPY':
        total += int(x)
    else:
        total += 380000 * float(x)

print(total)
