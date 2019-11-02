package Java;

import java.util.Scanner;

public class SalarioComBonus {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double bonus, sal;
        input.next();
        sal    = input.nextDouble();
        bonus  = input.nextDouble();
        bonus = sal+(0.15*bonus);
        String str = String.format("%.2f", bonus);
        System.out.println("TOTAL = R$ " + str);
        input.close();
    }
}