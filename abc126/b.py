S = input()
s1 = int(S[:2])
s2 = int(S[2:])

m1 = (1 <= s1 <= 12)
m2 = (1 <= s2 <= 12)

if m1 and m2:
    print('AMBIGUOUS')
elif m1 and not m2:
    print('MMYY')
elif m2 and not m1:
    print('YYMM')
else:
    print('NA')

