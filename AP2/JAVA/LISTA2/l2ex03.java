import java.util.Scanner;

public class l2ex03 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número: ");
        int num = input.nextInt();

        if (num % 2 == 0) {
            System.out.print(num + " é par");
        } else {
            System.out.print(num + " é ímpar");
        }

        System.out.print("\n\n");
        input.close();
    }
}