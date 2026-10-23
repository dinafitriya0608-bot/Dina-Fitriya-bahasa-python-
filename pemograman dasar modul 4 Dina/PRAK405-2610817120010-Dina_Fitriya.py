n, k = input().split()
n = int(n)
k = int(k)

total = 0
for i in range(1, n + 1):
    amount= 0
    for j in range(i, 0, -1):
        print("(%d * %d)" % (j, k), end="")
        if j != 1:
            print(" + ", end="")
        amount = amount + j * k
    print(" =", amount)
    total = total + amount
print(total)