import java.util.Scanner;
import java.text.DecimalFormat;

public class ex005 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat casas = new DecimalFormat("#.##");

        System.out.print("Digite a sua altura: ");
        double altura = input.nextDouble();

        System.out.print("Digite a seu peso: ");
        double peso = input.nextDouble();

        double imc = peso / Math.pow(altura, 2);

        System.out.print("Seu IMC é: " + casas.format(imc));

        input.close();

    }
}
