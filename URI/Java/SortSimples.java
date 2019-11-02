package Java;

import java.util.Scanner;
import java.util.Arrays;

public class SortSimples {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] vetor = new int [3];
        for (int i = 0; i < 3; i++) {
            vetor[i] = input.nextInt();
        }
        int[] vaux = vetor.clone();
        Arrays.sort(vetor);
        for (int i = 0; i < 3; i++) {
            System.out.print(vetor[i]+"\n");
        }
        System.out.print("\n");
        for (int i = 0; i < 3; i++) {
            System.out.print(vaux[i]+"\n");
        }
        input.close();
    }
}