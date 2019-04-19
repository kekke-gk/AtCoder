y, m, d = map(int, input().split('/'))
c1 = y >= 2020
c2 = y == 2019 and m >= 5
if c1 or c2:
    print('TBD')
else:
    print('Heisei')
