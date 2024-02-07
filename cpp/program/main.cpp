/*
Saya Muhammad Yusdan Ali dengan NIM 2206847 mengerjakan LP 1
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// import library
#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main(){
    // create object using list
    int i, n = 0;
    string id, idbaru, name, bidang, partai;
    vector<Depeer> anggota;

    cout << "Masukkan jumlah anggota DPR: ";

    cin >> n;

    for(i = 0; i < n; i++){
        cout << "Masukkan id: ";
        cin >> id;
        cout << "Masukkan nama: ";
        cin >> name;
        cout << "Masukkan bidang: ";
        cin >> bidang;
        cout << "Masukkan partai: ";
        cin >> partai;

        anggota.push_back(Depeer(id, name, bidang, partai));
    }

    // print the list
    cout << "Daftar anggota DPR: \n";
    for(i = 0; i < n; i++){
        cout << i+1 << "." << '\n';
        cout << "ID     : " << anggota[i].getId() << '\n';
        cout << "Nama   : " << anggota[i].getName() << '\n';
        cout << "Bidang : " << anggota[i].getBidang() << '\n';
        cout << "Partai : " << anggota[i].getPartai() << "\n\n";
    }
    
    // menu
    cout << '\n' << "Menu: \n";
    cout << "1. Tambah Anggota DPR\n";
    cout << "2. Ubah data Anggota DPR\n";
    cout << "3. Hapus Anggota DPR\n";
    cout << "4. Tampilkan Anggota DPR\n";
    cout << "5. Keluar\n\n";

    // while loop for menu
    int menu;
    // selama menu bukan 4, maka akan terus berjalan
    while(menu != 5){
        cout << "Pilih menu: ";
        cin >> menu;

        if(menu == 1){
            n++;
            cout << "Masukkan id: ";
            cin >> id;
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan bidang: ";
            cin >> bidang;
            cout << "Masukkan partai: ";
            cin >> partai;
            cout << '\n';

            anggota.push_back(Depeer(id, name, bidang, partai));
        } else if(menu == 2){
            cout << "Masukkan id: ";
            cin >> id;
            cout << "Masukkan id baru:";
            cin >> idbaru;
            cout << "Masukkan nama: ";
            cin >> name;
            cout << "Masukkan bidang: ";
            cin >> bidang;
            cout << "Masukkan partai: ";
            cin >> partai;
            cout << '\n';

            for(i = 0; i < n; i++){
                if(anggota[i].getId() == id){
                    //set id baru
                    anggota[i].setId(idbaru);
                    anggota[i].setName(name);
                    anggota[i].setBidang(bidang);
                    anggota[i].setPartai(partai);
                }
            }
        } else if(menu == 3){
            cout << "Masukkan id: ";
            cin >> id;
            cout << '\n';

           // remove the element
            for(i = 0; i < n; i++){
                if(anggota[i].getId() == id){
                    anggota.erase(anggota.begin() + i);
                    n--;
                    //git add .
                    //git commit -m "commit message"
                    //git push -u origin main
                }
            }
        }
        else if (menu == 4)
        {
            // print the list
            cout << "Daftar anggota DPR: \n";
            for(i = 0; i < n; i++){
                cout << i+1 << "." << '\n';
                cout << "ID     : " << anggota[i].getId() << '\n';
                cout << "Nama   : " << anggota[i].getName() << '\n';
                cout << "Bidang : " << anggota[i].getBidang() << '\n';
                cout << "Partai : " << anggota[i].getPartai() << "\n\n";
            }
        }
    }

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}