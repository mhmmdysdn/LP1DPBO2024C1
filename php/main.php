/*
Saya Muhammad Yusdan Ali dengan NIM 2206847 mengerjakan LP 1
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
<?php
require ('Depeer.php');

$members[] = new Depeer("1", "Budi", "Ketua", "KMP", "budi.jpg"); 
$members[] = new Depeer("2", "Susi", "Wakil Ketua", "KMP", "susi.jpg");
$members[] = new Depeer("3", "Rudi", "Sekretaris", "KMP", "rudi.jpg");
$members[] = new Depeer("4", "Tuti", "Bendahara", "KMP", "tuti.jpeg");

// Tampilkan dalam tabel
echo "<table border='1'>";
echo "<tr>
        <th>ID</th>
        <th>Nama</th>
        <th>Jabatan</th>
        <th>Partai</th>
        <th>Foto</th></tr>";

foreach ($members as $member) {
    echo "<tr>";
        echo "<td>" . $member->getId() . "</td>";
        echo "<td>" . $member->getName() . "</td>"; 
        echo "<td>" . $member->getBidang() . "</td>";
        echo "<td>" . $member->getPartai() . "</td>";
        echo "<td>" . $member->getFoto() . "</td>";
    echo "</tr>"; 
}

echo "</table>";
?>
