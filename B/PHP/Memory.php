<?php

class Memory extends Hardware{
    private $freq = 0;
    private $memSize = 0;
    private $cuda = false;

    public function __construct($freq = 0, $memSize = 0, $cuda = false){
        $this->freq = $freq;
        $this->memSize = $memSize;
        $this->cuda = $cuda;
    }

    public function setFreq($freq){
        $this->freq = $freq;
    }

    public function getFreq(){
        return $this->freq;
    }

    public function setMemSize($memSize){
        $this->memSize = $memSize;
    }

    public function getMemSize(){
        return $this->memSize;
    }

    public function setCuda($cuda){
        $this->cuda = $cuda;
    }

    public function getcuda(){
        return $this->cuda;
    }
}

?>