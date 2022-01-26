import random

print("Program Password Generator Sederhana")
jumlah = int(input("Masukkan panjang password : "))
lower = "abcdefghijklmnopqrstuvwxyz"
upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
simbol = "!@#$%^&*()_+=-"
angka = "0123456789"

password = "".join(random.sample(lower+upper+simbol+angka,jumlah))
print(password)