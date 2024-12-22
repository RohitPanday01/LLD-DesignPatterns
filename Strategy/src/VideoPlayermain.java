package src;

public class VideoPlayermain {
    static public void main(String[] args){

        /*    Resolution resol = new Resol1080p();
        Device device = new TV();
        VideoPlayer player = new TVVideoPLayer(device,resol);
        player.display();*/

        Resuolution resolution = new Resol480p();
        Device device1 = new Phone();

        VideoPlayer phonePlayer = new PhonePlayer(device1, resolution);
        phonePlayer.display();
    }

}

