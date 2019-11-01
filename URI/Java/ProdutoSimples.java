import java.util.Scanner;

public class ProdutoSimples {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b;
        a = input.nextInt();
        b = input.nextInt();
        int produto = a*b;
        System.out.println("PROD = " + produto);
        input.close();
    }
}