<?php
include "Product.php";
include "Hardware.php";
include "Memory.php";
include "Item.php";

$PC = new Item();
$PC->setID("ROG123");
$PC->setPrice(35000000);
$PC->setBrand("NVIDIA");
$PC->setModel("RTX 3090");
$PC->setFreq(1500);
$PC->setMemSize(24);
$PC->setCuda(true);

$PC2 = new Item();
$PC2->setID("MSI123");
$PC2->setPrice(15000000);
$PC2->setBrand("AMD");
$PC2->setModel("RX 6700 XT");
$PC2->setFreq(2600);
$PC2->setMemSize(12);
$PC2->setCuda(false);

echo "=================================". "<br>";
echo "ID           : ". $PC->getID() . "<br>";
echo "Harga        : ". $PC->getPrice() . "<br>";
echo "Brand        : ". $PC->getBrand() . "<br>";
echo "Model        : ". $PC->getModel() . "<br>";
echo "Frequency    : ". $PC->getFreq() . "<br>";
echo "VRAM Size    : ". $PC->getMemSize() . "<br>";
echo "Cuda Support : ". $PC->getCuda() . "<br>";
echo "=================================". "<br>";
echo "ID           : ". $PC2->getID() . "<br>";
echo "Harga        : ". $PC2->getPrice() . "<br>";
echo "Brand        : ". $PC2->getBrand() . "<br>";
echo "Model        : ". $PC2->getModel() . "<br>";
echo "Frequency    : ". $PC2->getFreq() . "<br>";
echo "VRAM Size    : ". $PC2->getMemSize() . "<br>";
echo "Cuda Support : ". $PC2->getCuda() . "<br>";
echo "=================================". "<br>";

?>