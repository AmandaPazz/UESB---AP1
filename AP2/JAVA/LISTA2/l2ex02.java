import java.util.Scanner;

public class l2ex02 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o primeiro número: ");
        int num1 = input.nextInt();

        System.out.print("Digite o segundo número: ");
        int num2 = input.nextInt();

        if (num1 > num2) {
            System.out.print(num1 + " é maior que " + num2);
        } else if (num1 < num2) {
            System.out.print(num1 + " é menor que " + num2);
        } else {
            System.out.print("Os números são iguais.");
        }

        System.out.print("\n\n");
        input.close();
    }
}
