import java.util.Scanner;

public class DistanciaEntreDoisPontos {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float x1, x2, y1, y2;
        double distancia;
        
        x1 = input.nextFloat();
        y1 = input.nextFloat();
        x2 = input.nextFloat();
        y2 = input.nextFloat();
        
        distancia = java.lang.Math.sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        String str = String.format("%.4f", distancia);

        System.out.println(str);
        input.close();
    }
}
