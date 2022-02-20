#include "Hardware.cpp"

class Memory : public Hardware{
    private:
        int freq;
        int memSize;
        bool cuda;
    public:
        Memory(){
            this->freq = 0;
            this->memSize = 0;
            this->cuda = false;
        }

        void setFreq(int f){
            this->freq = f;
        }

        int getFreq(){
            return this->freq;
        }

        void setMemSize(int m){
            this->memSize = m;
        }

        int getMemSize(){
            return this->memSize;
        }

        void setCuda(bool c){
            this->cuda = c;
        }

        bool getCuda(){
            return this->cuda;
        }
};