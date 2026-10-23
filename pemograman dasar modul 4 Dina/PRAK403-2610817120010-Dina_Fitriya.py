a, b = map(int, input().split())

if a > b:
    difference = a - b
else:
    difference = b - a

for i in range(difference + 1):
    if a < b:
        x = a + i
        y = b - i
    else:
        x = a - i
        y = b + i
    print(x, y, end=" ")
    if i != difference:
        print(" - ", end=" ")
print()