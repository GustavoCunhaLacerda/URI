import java.util.Scanner;

public class CalculoSimples {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int tag1, tag2, qte1, qte2;
        float preco1, preco2, valor;
        tag1 = input.nextInt();
        qte1 = input.nextInt();
        preco1 = input.nextFloat();

        tag2 = input.nextInt();
        qte2 = input.nextInt();
        preco2 = input.nextFloat();

        valor = qte1*preco1 + qte2*preco2;
        String str = String.format("%.2f", valor);


        System.out.println("VALOR A PAGAR: R$ " + str);
        input.close();
    }
}