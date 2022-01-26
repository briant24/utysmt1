import struct
def login():
    print("<<==========================================>>")
    print("Halaman Login")
    user = input("Masukkan username : ")
    password = input("Masukkan password : ")
    if user == "admin" and password == "admin":
        print("login berhasil...\n\n")
        main()
    else:
        print("login gagal, coba lagi")
        login()
def main():
    pes = []
    har = []
    jum = []
    pesa = input("masukkan pesanan anda: ")
    harg = input("masukkan harga barang: ")
    juml = input("masukkan jumlah barang: ")
    pes.append(pesa)
    har.append(harg)
    jum.append(juml)
    lag1 = input("ingin menambahkan item: (y/n)")
    while lag1 =="y":
        pesa = input("masukkan pesanan anda: ")
        harg = input("masukkan harga barang: ")
        juml = input("masukkan jumlah barang: ")
        pes.append(pesa)
        har.append(harg)
        jum.append(juml)
        lag1 = input("ingin menambahkan item: (y/n)")
        if lag1 =="n":
            print("<<==========================================>>")
            print("Nama Barang\t Jumlah\t Harga\t Total\t")
            for x in pes:
                print(x)
login()