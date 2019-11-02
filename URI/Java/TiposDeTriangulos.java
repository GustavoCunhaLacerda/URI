package Java;

import java.util.Arrays;
import java.util.Scanner;

public class TiposDeTriangulos {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a, b, c;
        float[] arr = new float [3];
        for (int i = 0; i < 3; i++) {
            arr[i] = input.nextFloat();
        }
        Arrays.sort(arr);
        a = arr[2];
        b = arr[1];
        c = arr[0];
        if (a >= b+c) {
            System.out.println("NAO FORMA TRIANGULO");
        } else {
            if (a*a == b*b + c*c) {
                System.out.println("TRIANGULO RETANGULO");
            }
            if (a*a < (b*b) + (c*c) ) {
                System.out.println("TRIANGULO ACUTANGULO");
            }
            if (a*a > (b*b) + (c*c) ) {
                System.out.println("TRIANGULO OBTUSANGULO");
            }
            if (a == b && b == c) {
                System.out.println("TRIANGULO EQUILATERO");
            } else if (a == b || a == c || c ==b) {
                System.out.println("TRIANGULO ISOSCELES");
            }
        }
        input.close();
    }
}