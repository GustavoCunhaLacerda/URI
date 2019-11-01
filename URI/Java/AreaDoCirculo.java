import java.util.Scanner;

public class AreaDoCirculo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a;
        a = input.nextDouble();
        double area = a*a*3.14159;
        String str = String.format("%.04f", area);
        System.out.println("A=" + str);
        input.close();
    }
}