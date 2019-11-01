import java.util.Scanner;

public class Media1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b;
        a = input.nextFloat();
        b = input.nextFloat();
        double produto = (3.5f*a + 7.5f*b) / 11.0f;
        String prod = String.format("%.05f", produto);
        System.out.println("MEDIA = " + prod);
        input.close();
    }
}