N = int(input())
P = [int(p) for p in input().split()]

d = list(range(200000+1))

for p in P:
    if p < 0:
        print(d[0])

    try:
        d.remove(p)
    except:
        pass

    print(d[0])