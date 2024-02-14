/*
Saya Muhammad Yusdan Ali dengan NIM 2206847 mengerjakan LP 1
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        ArrayList<Depeer> depeers = new ArrayList<>(); 
        Scanner input = new Scanner(System.in);

        // iterasi 
        System.out.print("Masukkan jumlah data: ");
        int n = input.nextInt();

        for(int i=0; i<n; i++) {
            System.out.print("Masukkan id: ");
            String id = input.next();
            System.out.print("Masukkan nama: ");
            String name = input.next(); 
            System.out.print("Masukkan bidang: ");
            String bidang = input.next();
            System.out.print("Masukkan partai: ");  
            String partai = input.next();
            
            depeers.add(new Depeer(id, name, bidang, partai)); 
        }

        // cari string terpanjang di id
        int maxId = 0;
        for(int i=0; i<depeers.size(); i++) {
            if(depeers.get(i).getId().length() > maxId) {
                maxId = depeers.get(i).getId().length();
            }
        }

        // cari string terpanjang di name
        int maxName = 0;
        for(int i=0; i<depeers.size(); i++) {
            if(depeers.get(i).getName().length() > maxName) {
                maxName = depeers.get(i).getName().length();
            }
        }

        // cari string terpanjang di bidang
        int maxBidang = 0;
        for(int i=0; i<depeers.size(); i++) {
            if(depeers.get(i).getBidang().length() > maxBidang) {
                maxBidang = depeers.get(i).getBidang().length();
            }
        }

        // cari string terpanjang di partai
        int maxPartai = 0;
        for(int i=0; i<depeers.size(); i++) {
            if(depeers.get(i).getPartai().length() > maxPartai) {
                maxPartai = depeers.get(i).getPartai().length();
            }
        }

        // tampilan
        System.out.println("ID" + " ".repeat(maxId - 2) + " | " + "Nama" + " ".repeat(maxName - 4) + " | " + "Bidang" + " ".repeat(maxBidang - 6) + " | " + "Partai" + " ".repeat(maxPartai - 6));
        for(int i=0; i<depeers.size(); i++) {
            System.out.println(depeers.get(i).getId() + " ".repeat(maxId - depeers.get(i).getId().length()) + " | " + depeers.get(i).getName() + " ".repeat(maxName - depeers.get(i).getName().length()) + " | " + depeers.get(i).getBidang() + " ".repeat(maxBidang - depeers.get(i).getBidang().length()) + " | " + depeers.get(i).getPartai() + " ".repeat(maxPartai - depeers.get(i).getPartai().length()));
        }

    }

    
}
