import java.util.Scanner;

public class Esfera {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double raio, volume, pi =  3.14159;
        raio = input.nextDouble();
        volume = (4*pi*raio*raio*raio)/3.0f;
        String str = String.format("%.3f", volume);


        System.out.println("VOLUME = " + str);
        input.close();
    }
}