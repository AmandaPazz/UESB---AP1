import java.util.Scanner;
import java.text.DecimalFormat;

public class ex002 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        DecimalFormat decimal = new DecimalFormat("#.###");

        System.out.print("Digite a primeira nota: ");
        double num1 = scan.nextDouble();

        System.out.print("Digite a segunda nota: ");
        double num2 = scan.nextDouble();

        System.out.print("Digite a terceira nota: ");
        double num3 = scan.nextDouble();

        double media = (num1 + num2 + num3) / 3;

        System.out.print("A média é : " + decimal.format(media));

        scan.close();

    }
}
