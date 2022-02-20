public class Hardware extends Product{
    private String brand;
    private String model;

    public Hardware(){
        this.brand = "";
        this.model = "";
    }

    public void setBrand(String b){
        this.brand = b;
    }

    public String getBrand(){
        return brand;
    }

    public void setModel(String m){
        this.model = m;
    }

    public String getModel(){
        return model;
    }
}