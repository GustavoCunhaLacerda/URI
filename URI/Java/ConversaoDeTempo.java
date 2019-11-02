import java.util.Scanner;
import java.lang.Math;

public class ConversaoDeTempo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int hora, minuto, segundos;

        hora = n/(60*60);
        n =  n%(60*60);
        minuto = n/60;
        n = n%60;
        segundos = n;
        System.out.println(hora+ ":" + minuto+":"+segundos);


        input.close();
    }
}