package Java;

import java.util.Scanner;

public class Salario {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number, sal;
        float tempo;
        number = input.nextInt();
        sal    = input.nextInt();
        tempo  = input.nextFloat();
        String str = String.format("%.2f", sal*tempo);
        System.out.println("NUMBER = " + number);
        System.out.println("SALARY = U$ " + str);
        input.close();
    }
}