package Java;
import java.util.Scanner;

public class QuadradoDePares {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        for (int i = 2; i <= x; i+=2) {
            System.out.println(i+"^2 = "+ i*i);
        }
        input.close();
    }
}