#Saya Muhammad Yusdan Ali dengan NIM 2206847 mengerjakan LP 1
#dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
#melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
from Depeer import Depeer

depeers = []

#iterasi
n = int(input("Masukkan jumlah data: "))
for i in range(n):
    id = input("Masukkan id: ")
    name = input("Masukkan nama: ")
    bidang = input("Masukkan bidang: ")
    partai = input("Masukkan partai: ")
    depeers.append(Depeer(id, name, bidang, partai))

#menampilkan data
i = 0
# finding longest string
max_id = max(len("ID"), len(max((d.getId() for d in depeers), key=len)))  
max_name = max(len("Nama"), len(max((d.getName() for d in depeers), key=len)))
max_bidang = max(len("Bidang"), len(max((d.getBidang() for d in depeers), key=len)))
max_partai = max(len("Partai"), len(max((d.getPartai() for d in depeers), key=len)))

print()

# header
print("| {0:^{max_id}} | {1:^{max_name}} | {2:^{max_bidang}} | {3:^{max_partai}} |".format("ID", "Nama", "Bidang", "Partai", max_id=max_id, max_name=max_name, max_bidang=max_bidang, max_partai=max_partai))
    
# data
for d in depeers:
    print("| {0:<{max_id}} | {1:<{max_name}} | {2:<{max_bidang}} | {3:<{max_partai}} |".format(d.getId(), d.getName(), d.getBidang(), d.getPartai(), max_id=max_id, max_name=max_name, max_bidang=max_bidang, max_partai=max_partai))

print()

# tampilkan menu
print("Menu: ")
print("1. Tambah data")
print("2. Hapus data")
print("3. Update data")
print("4. Keluar")
print()

# pilih menu
menu = int(input("Pilih menu: "))

# selama menu bukan keluar
while menu != 4:
    if menu == 1:
        a = int(input("Masukkan jumlah data: "))
        for i in range(a):
            id = input("Masukkan id: ")
            name = input("Masukkan nama: ")
            bidang = input("Masukkan bidang: ")
            partai = input("Masukkan partai: ")
            depeers.append(Depeer(id, name, bidang, partai))
        menu = 4
    elif menu == 2:
        id = input("Masukkan id yang akan dihapus: ")
        for d in depeers:
            if d.getId() == id:
                depeers.remove(d)
                break
        menu = 4
    elif menu == 3:
        id = input("Masukkan id yang akan diupdate: ")
        for d in depeers:
            if d.getId() == id:
                new_id = input("Masukkan id: ")
                name = input("Masukkan nama: ")
                bidang = input("Masukkan bidang: ")
                partai = input("Masukkan partai: ")
                d.setId(new_id)
                d.setName(name)
                d.setBidang(bidang)
                d.setPartai(partai)
                break
        menu = 4

#menampilkan data
i = 0
# finding longest string
max_id = max(len("ID"), len(max((d.getId() for d in depeers), key=len)))  
max_name = max(len("Nama"), len(max((d.getName() for d in depeers), key=len)))
max_bidang = max(len("Bidang"), len(max((d.getBidang() for d in depeers), key=len)))
max_partai = max(len("Partai"), len(max((d.getPartai() for d in depeers), key=len)))

print()

# header
print("| {0:^{max_id}} | {1:^{max_name}} | {2:^{max_bidang}} | {3:^{max_partai}} |".format("ID", "Nama", "Bidang", "Partai", max_id=max_id, max_name=max_name, max_bidang=max_bidang, max_partai=max_partai))
    
# data
for d in depeers:
    print("| {0:<{max_id}} | {1:<{max_name}} | {2:<{max_bidang}} | {3:<{max_partai}} |".format(d.getId(), d.getName(), d.getBidang(), d.getPartai(), max_id=max_id, max_name=max_name, max_bidang=max_bidang, max_partai=max_partai))

print()
