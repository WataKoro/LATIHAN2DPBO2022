#include "Product.cpp"

class Hardware : public Product{
    private:
        string brand;
        string model;
    public:
        Hardware(){
            this->brand = "";
            this->model = "";
        }

        void setBrand(string b){
            this->brand = b;
        }

        string getBrand(){
            return this->brand;
        }

        void setModel(string m){
            this->model = m;
        }

        string getModel(){
            return this->model;
        }
};