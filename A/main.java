import java.util.*;

public class main{
    public static void main(String[] args){
        Item PC = new Item();
        PC.setID("ROG123");
        PC.setPrice(35000000);
        PC.setBrand("NVIDIA");
        PC.setModel("RTX 3090");
        PC.setFreq(1500);
        PC.setMemSize(24);
        PC.setSupportsCuda(true);

        Item PC2 = new Item();
        PC2.setID("MSI123");
        PC2.setPrice(15000000);
        PC2.setBrand("AMD");
        PC2.setModel("RX 6700 XT");
        PC2.setFreq(2600);
        PC2.setMemSize(12);
        PC2.setSupportsCuda(false);

        System.out.println("=================================");
        System.out.println("ID           : " + PC.getID());
        System.out.println("Harga        : RP." + PC.getPrice());
        System.out.println("Brand        : " + PC.getBrand());
        System.out.println("Model        : " + PC.getModel());
        System.out.println("Frequency    : " + PC.getFreq() + "MHz");
        System.out.println("VRAM Size    : " + PC.getMemSize() + "GB");
        System.out.println("Cuda Support : " + PC.getSupportsCuda());
        System.out.println("=================================");
        System.out.println("ID           : " + PC2.getID());
        System.out.println("Harga        : RP." + PC2.getPrice());
        System.out.println("Brand        : " + PC2.getBrand());
        System.out.println("Model        : " + PC2.getModel());
        System.out.println("Frequency    : " + PC2.getFreq() + "MHz");
        System.out.println("VRAM Size    : " + PC2.getMemSize() + "GB");
        System.out.println("Cuda Support : " + PC2.getSupportsCuda());
        System.out.println("=================================");
    }
}