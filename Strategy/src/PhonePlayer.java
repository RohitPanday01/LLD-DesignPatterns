package src;

public class PhonePlayer extends VideoPlayer {

    
    public PhonePlayer(Device device, Resuolution resolution) {
        this.currDevice = device;
        this.currResol = resolution;
    }

    @Override
    void display(){
        this.getResolution();
        this.getResolution(); 
    }

}
