package Java;

import java.util.Scanner;

public class NumerosImpares {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        for (int i = 1; i <= x; i+=2) {
            System.out.println(i);
        }
        input.close();
    }
}