import java.util.Scanner;
import java.text.DecimalFormat;

public class ex004 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat casas = new DecimalFormat("#.##");

        System.out.print("Digite o preço do produto: ");
        double preco = input.nextDouble();

        System.out.print("Digite o desconto do produto em %: ");
        double desconto = input.nextDouble();

        preco = preco - (preco * desconto / 100);

        System.out.print("O preço final é: R$" + casas.format(preco));

        input.close();

    }
}
