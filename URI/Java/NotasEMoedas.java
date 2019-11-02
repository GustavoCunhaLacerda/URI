package Java;

import java.util.Scanner;

public class NotasEMoedas {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float din = input.nextFloat();
        int pi = (int)din;
        int pd = (int)(din*100 - pi*100);

        System.out.println("NOTAS:");
        System.out.println(pi/100 + " nota(s) de R$ 100.00");
        pi = pi%100;
        System.out.println(pi/50 + " nota(s) de R$ 50.00");
        pi = pi%50;
        System.out.println(pi/20 + " nota(s) de R$ 20.00");
        pi = pi%20;
        System.out.println(pi/10 + " nota(s) de R$ 10.00");
        pi = pi%10;
        System.out.println(pi/5 + " nota(s) de R$ 5.00");
        pi = pi%5;
        System.out.println(pi/2 + " nota(s) de R$ 2.00");
        pi = pi%2;
        pd+= 100*pi;
        System.out.println("MOEDAS:");
        System.out.println(pd/100 + " moeda(s) de R$ 1.00");
        pd %= 100;
        System.out.println(pd/50 + " moeda(s) de R$ 0.50");
        pd %= 50;
        System.out.println(pd/25 + " moeda(s) de R$ 0.25");
        pd %= 25;
        System.out.println(pd/10 + " moeda(s) de R$ 0.10");
        pd %= 10;
        System.out.println(pd/5 + " moeda(s) de R$ 0.05");
        pd %= 5;
        System.out.println(pd + " moeda(s) de R$ 0.01");
        
        input.close();
    }
}