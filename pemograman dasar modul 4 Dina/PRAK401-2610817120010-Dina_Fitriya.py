Multiple, symbol = input().split()
Multiple = int(Multiple)

for i in range(1, 51):
    if i % Multiple == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")