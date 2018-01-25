import itertools as itt
N, X = map(int, input().split())
ws = [int(input()) for i in range(N)]
ws0 = ws[:int(len(ws)/2)]
ws1 = ws[int(len(ws)/2):]

sum0 = []
for i in range(len(ws0)+1):
    sum0.extend(map(sum, itt.combinations(ws0, i)))
sum0 = sorted(sum0)


sum1 = []
for i in range(len(ws1)+1):
    sum1.extend(map(sum, itt.combinations(ws1, i)))
sum1 = sorted(sum1)

def count_near(l, v, index):
    count = 1
    i = 0
    while index+i+1 < len(l) and l[index+i+1] == v:
        i += 1

    count += i

    i = 0
    while 0 <= index-i-1 and l[index-i-1] == v:
        i += 1

    count += i
    return count

def binary_search(l, v):
    low = 0
    high = len(l)-1
    t = len(l)//2

    while(low <= high):
        if(l[t] == v):
            return count_near(l, v, t)
        elif l[t] < v:
            low = t + 1
        elif v < l[t]:
            high = t - 1
        t = (low + high) // 2

    if l[t] == v:
        return count_near(l, v, t)
    return 0



count = 0
for a in sum0:
    # count += sum1.count(X - a)
    count += binary_search(sum1, X - a)

print(count)
