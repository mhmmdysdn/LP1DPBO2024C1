<?php

class Depeer {

    // private attributes 
    private $id;
    private $name;
    private $bidang;
    private $partai;
    private $foto;

    public function __construct($id = "", $name = "", $bidang = "", $partai = "", $foto = "") {
        $this->id = $id;
        $this->name = $name; 
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = "foto/" . $foto;
    }

    // Getter and Setter 
    public function getId() {
        return $this->id;
    }

    public function setId($id) {
        $this->id = $id;
    }

    public function getName() {
        return $this->name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    public function getBidang() {
        return $this->bidang;
    }

    public function setBidang($bidang) {
        $this->bidang = $bidang;
    }

    public function getPartai() {
        return $this->partai;
    }

    public function setPartai($partai) { 
        $this->partai = $partai;
    }

    public function getFoto() {
        return "<img src='" . $this->foto . "' width='100' height='100'>";
    }

    public function setFoto($foto) {
        $this->foto = $foto;
    }

}

?>