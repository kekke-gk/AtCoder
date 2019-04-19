import math as m
L = [int(input()) for i in range(6)]
print(m.ceil(L[0] / min(L[1:])) + 4)
