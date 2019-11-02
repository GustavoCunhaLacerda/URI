package Java;

import java.util.Scanner;

public class IdadeEmDias {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int time = input.nextInt();
        
        System.out.println(time/365 + " ano(s)");
        time %= 365;
        System.out.println(time/30 + " mes(es)");
        time %= 30;
        System.out.println(time + " dia(s)");

        input.close();
    }
}