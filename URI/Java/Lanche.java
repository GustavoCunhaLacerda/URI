package Java;

import java.util.Scanner;
// import java.lang.Math;

public class Lanche {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int qte, tag = input.nextInt();
        float preco = 0;
        qte = input.nextInt();

        switch (tag) {
            case 1:
                preco = 4.00f;
                break;
            case 2:
                preco = 4.50f;
                break;
            case 3:
                preco = 5.00f;
                break;
            case 4:
                preco = 2.00f;
                break;
            case 5:
                preco = 1.50f;
                break;
        }
        String str = String.format("%.2f", preco*qte);
        System.out.println("Total: R$ "+str);
        input.close();
    }
}