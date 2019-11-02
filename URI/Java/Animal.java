import java.util.Scanner;
import java.lang.Math;

public class Animal {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String c1, c2, c3;
        c1 = input.nextLine();
        c2 = input.nextLine();
        c3 = input.nextLine();
        if (c1.compareTo("vertebrado") == 0) {
            if (c2.compareTo("ave") == 0) {
                if (c3.compareTo("carnivoro") == 0){
                    System.out.println("aguia");
                } else {
                    System.out.println("pomba");
                }
            } else {
                if (c3.compareTo("onivoro") == 0) {
                    System.out.println("homem");
                } else {
                    System.out.println("vaca");
                }
            }
        } else {
            if (c2.compareTo("inseto") == 0) {
                if (c3.compareTo("hematofago") == 0) {
                    System.out.println("pulga");
                } else {
                    System.out.println("lagarta");
                }
            } else {
                if (c3.compareTo("hematofago") == 0) {
                System.out.println("sanguessuga");
                } else {
                    System.out.println("minhoca");
                }
            }
        }
        input.close();
    }
}