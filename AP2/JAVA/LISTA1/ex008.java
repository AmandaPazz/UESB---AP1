import java.util.Scanner;
import java.text.DecimalFormat;

public class ex008 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat casas = new DecimalFormat("#.##");

        System.out.print("Digite o valor da hora trabalhada: ");
        double valor = input.nextDouble();

        System.out.print("Digite quantas horas foram trabalhadas: ");
        double horas = input.nextDouble();

        double bruto = valor * horas;

        System.out.print("O seu salário bruto é: R$" + casas.format(bruto));


        System.out.print("\n\n");
        input.close();

    }
}
