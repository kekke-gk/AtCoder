import sys

X, Y = map(int, input().split('/'))
if X < Y:
    print('Impossible')
    sys.exit()


def sm(n):
    return n(n+1)/2

n = 1
s = 0

while True:
    s += n

    if X < s:
        print(n)
        sys.exit()
        if Y == n:
            print(n, s - X)

    n += 1
