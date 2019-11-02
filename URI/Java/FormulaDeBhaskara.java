package Java;

import java.util.Scanner;
import java.lang.Math;

public class FormulaDeBhaskara {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b, c, delta, r1, r2;
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        
        delta = b*b - (4*a*c);
        if (delta < 0 || a == 0) {
            System.out.println("Impossivel calcular");
        } else {
            r1 = (-b + Math.sqrt(delta)) / (2*a);
            r2 = (-b - Math.sqrt(delta)) / (2*a);
            String str1, str2;
            str1 = String.format("%.5f", r1);
            str2 = String.format("%.5f", r2);
            System.out.println("R1 = " + str1);
            System.out.println("R2 = " + str2);
        }
        
        input.close();
    }
}