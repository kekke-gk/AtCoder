N, M = map(int, input().split())
AB = [[int(a) for a in input().split()] for _ in range(N)]
AB = sorted(AB, key=lambda x: x[0])

sum = 0
remain_cnt = M
i = 0

while(True):
    if remain_cnt <= AB[i][1]:
        sum += remain_cnt * AB[i][0]
        break

    sum += AB[i][0] * AB[i][1]
    remain_cnt -= AB[i][1]
    i += 1

print(sum)
