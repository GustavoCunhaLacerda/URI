import java.util.Scanner;
import java.lang.Math;

public class Intervalo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float num = input.nextFloat();

        if (num >= 0.0 && num <= 25.0) {
            System.out.println("Intervalo [0,25]");
        } else if (num > 25.0 && num <= 50.0) {
            System.out.println("Intervalo (25,50]");
        } else if (num > 50.0 && num <= 75.0) {
            System.out.println("Intervalo (50,75]");
        } else if (num > 50.0 && num <= 100.0) {
            System.out.println("Intervalo (75,100]");
        } else {
            System.out.println("Fora de intervalo");
        }

        input.close();
    }
}