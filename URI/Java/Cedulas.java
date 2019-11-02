package Java;

import java.util.Scanner;

public class Cedulas {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int din = input.nextInt();

        System.out.println(din);
                
        System.out.println(din/100 + " nota(s) de R$ 100,00");
        din = din%100;
        System.out.println(din/50 + " nota(s) de R$ 50,00");
        din = din%50;
        System.out.println(din/20 + " nota(s) de R$ 20,00");
        din = din%20;
        System.out.println(din/10 + " nota(s) de R$ 10,00");
        din = din%10;
        System.out.println(din/5 + " nota(s) de R$ 5,00");
        din = din%5;
        System.out.println(din/2 + " nota(s) de R$ 2,00");
        din = din%2;
        System.out.println(din + " nota(s) de R$ 1,00");

        input.close();
    }
}