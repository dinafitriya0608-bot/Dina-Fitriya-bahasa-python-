n = int(input())

for i in range(1, n + 1, 2):
    print(i, end=" ")
print()

if n % 2 == 0:
    beginning = n
else:
    beginning = n - 1

for i in range(beginning, 0, -2):
    print(i, end=" ")
print()