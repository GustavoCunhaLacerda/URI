import java.util.Scanner;
import java.lang.Math;

public class Triangulo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a, b, c, res;
        String str;
        a = input.nextFloat();
        b = input.nextFloat();
        c = input.nextFloat();
        if (Math.abs(b-c) < a && a < b+c) {
            if (Math.abs(a-c) < b && b < a+c) {
                if (Math.abs(a-b) < c && c < a+b) {
                    res = a+b+c;
                    str = String.format("%.1f", res);
                    System.out.println("Perimetro = "+str);
                }
            }
        } else {
            res = (a+b)*c/2.0f;
            str = String.format("%.1f", res);
            System.out.println("Area = "+str);
        }
        input.close();
    }
}