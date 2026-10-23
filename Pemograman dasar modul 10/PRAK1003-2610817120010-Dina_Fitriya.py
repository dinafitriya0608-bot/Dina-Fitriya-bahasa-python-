def number_of_digits(n):
    if n < 10:
        return n
    return (n % 10) + number_of_digits(n // 10)

n = int(input())
print("Jumlah digit dari " + str(n) + " adalah " + str(number_of_digits(n)))