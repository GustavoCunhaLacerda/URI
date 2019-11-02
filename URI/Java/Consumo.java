package Java;

import java.util.Scanner;

public class Consumo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x;
        float y, consumo;
        String str;
        
        x = input.nextInt();
        y = input.nextFloat();
        
        consumo = x/y;
        str = String.format("%.3f", consumo);

        System.out.println(str + " km/l");
        input.close();
    }
}