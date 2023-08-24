import java.util.Scanner;

public class ex001 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o número 1: ");
        int num1 = scan.nextInt();
        System.out.print("Digite o número 2: ");
        int num2 = scan.nextInt();

        int soma = num1 + num2;

        System.out.print("A soma é: " + soma);

        scan.close();

    }

}
