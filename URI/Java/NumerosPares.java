package Java;

import java.util.Scanner;

public class NumerosPares {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        for (int i = 2; i < 101; i+=2) {
            System.out.println(i);
        }
        input.close();
    }
}