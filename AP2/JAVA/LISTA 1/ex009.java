import java.util.Scanner;
import java.text.DecimalFormat;

public class ex009 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat casas = new DecimalFormat("#.##");

        System.out.print("Digite o valor que deseja converter: ");
        double original = input.nextDouble();

        System.out.print("Digite a taxa de conversão: ");
        double taxa = input.nextDouble();

        double convertido = taxa / original;

        System.out.print("O valor convertido é: " + casas.format(convertido));


        System.out.print("\n\n");
        input.close();

    }
}

