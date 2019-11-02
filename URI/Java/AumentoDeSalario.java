package Java;

import java.util.Scanner;

public class AumentoDeSalario {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float salario, percentual = 0, reajuste;
        salario = input.nextFloat();
        if (salario >= 0 && salario <= 400.00)
        {
            percentual = 0.15f;
        }
        if (salario >= 400.01f && salario <= 800.00f)
        {
            percentual = 0.12f;    
        }
        if (salario >= 800.01f && salario <= 1200.00f)
        {
            percentual = 0.10f;   
        }
        if (salario >= 1200.01f && salario <= 2000.00f)
        {
            percentual = 0.07f;
        }
        if (salario > 2000.00f)
        {
            percentual = 0.04f;        
        }
        reajuste = salario*percentual;
        System.out.println("Novo salario: "+ String.format("%.2f", salario+reajuste));
        System.out.println("Reajuste ganho: "+ String.format("%.2f", reajuste));
        System.out.println("Em percentual: "+ String.format("%.0f", percentual*100) + " %");
        input.close();
    }
}