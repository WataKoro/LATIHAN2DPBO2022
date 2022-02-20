public class Memory extends Hardware{
    private int freq;
    private int memSize;
    private boolean supportsCuda;

    public Memory(){
        this.freq = 0;
        this.memSize = 0;
        this.supportsCuda = false;
    }

    public void setFreq(int f){
        this.freq = f;
    }

    public int getFreq(){
        return freq;
    }

    public void setMemSize(int m){
        this.memSize = m;
    }

    public int getMemSize(){
        return memSize;
    }

    public void setSupportsCuda(boolean cs){
        this.supportsCuda = cs;
    }

    public boolean getSupportsCuda(){
        return supportsCuda;
    }
}