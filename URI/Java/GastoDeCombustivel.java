package Java;

import java.util.Scanner;

public class GastoDeCombustivel {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a, b, res;
        a = input.nextFloat();
        b = input.nextFloat();

        res = (b*a)/12f;
        
        String str = String.format("%.3f", res);
        System.out.println(str);

        input.close();
    }
}