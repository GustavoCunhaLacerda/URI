import java.util.Scanner;

public class SomaSimples {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b;
        a = input.nextInt();
        b = input.nextInt();
        int soma = a+b;
        System.out.println("SOMA = " + soma);
        input.close();
    }
}