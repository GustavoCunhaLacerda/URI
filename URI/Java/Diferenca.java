import java.util.Scanner;

public class Diferenca {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b, c, d;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        d = input.nextInt();
        int dif = (b*a - d*c);
        System.out.println("DIFERENCA = " + dif);
        input.close();
    }
}