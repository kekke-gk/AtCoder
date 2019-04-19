N = int(input())
L = [int(i) for i in input().split()]

L = sorted(L, reverse=True)

if L[0] < sum(L[1:]):
    print('Yes')
else:
    print('No')
