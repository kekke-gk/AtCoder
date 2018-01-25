N = int(input())

def is_prime(n):
    i = 2
    while pow(i, 2) <= n:
        if n%i == 0:
            return False
        i += 1
    return True

print('YES' if is_prime(N) else 'NO')
