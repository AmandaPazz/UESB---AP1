import java.util.Scanner;
import java.text.DecimalFormat;

public class ex003 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        DecimalFormat decimal = new DecimalFormat("#.###");

        System.out.print("Digite a temperatura em graus Celcius: ");
        double temp1 = scan.nextDouble();

        double temp2 = temp1 * 9 / 5 + 32;

        System.out.print("A temperatura em Fahrenheit é: " + decimal.format(temp2));

        scan.close();
    }
}
