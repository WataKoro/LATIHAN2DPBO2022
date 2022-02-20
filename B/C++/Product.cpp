#include <iostream>
#include <string>
using namespace std;

class Product{
    private:
        string id;
        int price;
    public:
        Product(){
            this->id="";
            this->price=0;
        }

        void setID(string i){
            this->id = i;
        }

        string getID(){
            return this->id;
        }

        void setPrice(int p){
            this->price = p;
        }

        int getPrice(){
            return this->price;
        }
};