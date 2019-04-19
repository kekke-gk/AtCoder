N, K = map(int, input().split())
A = [int(i) for i in input().split()]
L = len(format(K, 'b'))

digits = [list(format(a, '0{}b'.format(L)))[::-1] for a in A]
digits = list(zip(*digits))[::-1]
print(digits)

res = 0
for i, d in enumerate(digits):
    print('[{} {}]'.format(i, d))
    print('res: ', res)
    if i >= L:
        break

    if d.count('0') > N / 2:
        if res + (1 << (L - 1 - i)) > K:
            continue

        res += 1 << (L - 1 - i)
        print('res+')
        print(res, format(res, 'b'))

print(res, format(res, 'b'))
print(sum([res ^ a for a in A]))



# 10
# 00
# 00
#
# 2*2       = 4
# 2*1 + 1*3 = 5
