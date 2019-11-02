import java.util.Scanner;
import java.lang.Math;

public class NumerosPositivos {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float num;
        int pos = 0;
        for (int i = 0; i < 6; i++) {
            num = input.nextFloat();
            if (num > 0) {
                pos++;
            }
        }
        System.out.println(pos+" valores positivos");
        input.close();
    }
}