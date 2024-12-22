package src;

abstract public class VideoPlayer{
    
    Device currDevice;
    Resuolution currResol;

    abstract void display();

    void getDevice(){
        currDevice.device();
    }

    void getResolution(){
        currResol.resuolution();
    }
    
}