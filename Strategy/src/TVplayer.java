package src;

public class TVplayer extends VideoPlayer {

    
        public TVplayer(Device device, Resuolution resolution) {
            this.currDevice = device;
            this.currResol = resolution;
        }
    
        @Override
        void display(){
            this.getResolution();
            this.getResolution(); 
        }
    
}
