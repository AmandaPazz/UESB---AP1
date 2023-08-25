import java.util.Scanner;

public class l2ex01 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número: ");
        int num = input.nextInt();

        if (num >= 0) {
            System.out.print("O número é positivo.\n\n");
        }

        else {
            System.out.print("O número é negativo.\n\n");
        }

        input.close();
    }

}