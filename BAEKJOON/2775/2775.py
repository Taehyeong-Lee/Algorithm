T = int(input())

for i in range(T):
    k = int(input())
    n = int(input())

    Num = [A for A in range(1, n+1)]
    for j in range(k):
        for l in range(1, n):
            Num[l] += Num[l-1]
    print(Num[-1])