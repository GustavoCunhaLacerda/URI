package Java;

import java.util.Scanner;

public class Area {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b, c, area, pi = 3.14159;
        
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        
        area = (a*c)/2.0f;
        String str = String.format("%.3f", area);
        System.out.println("TRIANGULO: " + str);
        
        area = pi*c*c;
        str = String.format("%.3f", area);
        System.out.println("CIRCULO: " + str);

        area = (a+b)*c/2.0f;
        str = String.format("%.3f", area);
        System.out.println("TRAPEZIO: " + str);

        area = b*b;
        str = String.format("%.3f", area);
        System.out.println("QUADRADO: " + str);

        area = a*b;
        str = String.format("%.3f", area);
        System.out.println("RETANGULO: " + str);

        input.close();
    }
}