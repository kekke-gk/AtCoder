A, B, K = map(int, input().split())

def d(num):
    if num == 1:
        return [1]
    else:
        dl = []
        dl.append(1)
        for i in range(2, num // 2 + 1):
            if num % i == 0:
                dl.append(i)
        dl.append(num)

        return dl

ad = set(d(A))
bd = set(d(B))

div = sorted(set.intersection(ad, bd), reverse=True)

print(div[K-1])
