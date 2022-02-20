#include "Item.cpp"

int main(){
    Item PC;
    PC.setID("ROG123");
    PC.setPrice(35000000);
    PC.setBrand("NVIDIA");
    PC.setModel("RTX 3090");
    PC.setFreq(1500);
    PC.setMemSize(24);
    PC.setCuda(true);

    Item PC2;
    PC2.setID("MSI123");
    PC2.setPrice(15000000);
    PC2.setBrand("AMD");
    PC2.setModel("RX 6700 XT");
    PC2.setFreq(2600);
    PC2.setMemSize(12);
    PC2.setCuda(false);

    printf("=================================\n");
    cout<<"ID           : "<<PC.getID()<<endl;
    cout<<"Harga        : "<<PC.getPrice()<<endl;
    cout<<"Brand        : "<<PC.getBrand()<<endl;
    cout<<"Model        : "<<PC.getModel()<<endl;
    cout<<"Frequency    : "<<PC.getFreq()<<endl;
    cout<<"VRAM Size    : "<<PC.getFreq()<<endl;
    cout<<"Cuda Support : "<<PC.getCuda()<<endl;
    printf("=================================\n");
    cout<<"ID           : "<<PC2.getID()<<endl;
    cout<<"Harga        : "<<PC2.getPrice()<<endl;
    cout<<"Brand        : "<<PC2.getBrand()<<endl;
    cout<<"Model        : "<<PC2.getModel()<<endl;
    cout<<"Frequency    : "<<PC2.getFreq()<<endl;
    cout<<"VRAM Size    : "<<PC2.getFreq()<<endl;
    cout<<"Cuda Support : "<<PC2.getCuda()<<endl;
    printf("=================================\n");
}