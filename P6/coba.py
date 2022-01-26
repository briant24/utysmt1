
from types import UnionType

pes = []
har = []
jum = []
user = ""
password = ""
while user != "admin" and password != "admin":
    print("======================")
    print("Halaman Login")
    user = input("Masukkan username : ")
    password = input("Masukkan password : ")
    i = 5
    if user == "admin" and password == "admin":
        print("login berhasil...\n\n")
        for i in range(5):
            pesa = input("masukkan pesanan anda: ")
            harg = input("masukkan harga barang: ")
            juml = input("masukkan jumlah barang: ")
            pes[i].append(pesa)
            har[i].append(harg)
            jum[i].append(juml)
            lag1 = input("ingin menambahkan item: (y/n)")
            while lag1 =="y":
                pesa = input("masukkan pesanan anda: ")
                harg = input("masukkan harga barang: ")
                juml = input("masukkan jumlah barang: ")
                pes[i].append(pesa)
                har[i].append(harg)
                jum[i].append(juml)
                lag1 = input("ingin menambahkan item: (y/n)")
                if lag1 =="n":   
                    for x in pes:
                        print(x) 