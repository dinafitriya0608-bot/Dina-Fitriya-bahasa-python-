while True:
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    choice = int(input("Masukkan Pilihan : "))

    if choice == 5:
        print("Terimakasih, telah menggunakan Kalkulator Dina Fitriya")
        break
    elif choice < 1 or choice > 5: 
        print("Input anda salah, silahkan coba lagi")
    else:
        x = float(input("Masukkan nilai pertama : "))
        y = float(input("Masukkan nilai kedua : "))

        if choice == 1:
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f" % (x,  y, x + y))
        elif choice == 2:
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f" % (x, y, x - y))
        elif choice == 3:
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f" % (x, y, x * y))
        elif choice == 4:
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f" % (x, y, x / y))