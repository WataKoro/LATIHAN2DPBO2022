<?php

class Product{
    private $id = 0;
    private $price = 0;

    public function __construct($id = 0, $price = 0){
        $this->id = $id;
        $this->price = $price;
    }

    public function setID($id){
        $this->id = $id;
    }

    public function getID(){
        return $this->id;
    }

    public function setPrice($price){
        $this->price = $price;
    }

    public function getPrice(){
        return $this->price;
    }
}

?>