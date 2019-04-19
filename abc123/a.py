l = [int(input()) for i in range(5)]
k = int(input())

f = 'Yay!'
for i in range(5):
    for j in range(5):
        if abs(l[i] - l[j]) > k:
            f = ':('
            break

print(f)
