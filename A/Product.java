public class Product{
    private String id;
    private int price;

    public Product(){
        this.id = "";
        this.price = 0;
    }

    public void setID(String i){
        this.id = i;
    }

    public String getID(){
        return id;
    }

    public void setPrice(int p){
        this.price = p;
    }

    public int getPrice(){
        return price;
    }
}