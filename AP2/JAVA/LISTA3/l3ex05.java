import java.util.Scanner;

public class l3ex05 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o número que quer realizar o fatorial: \n");
        int num = input.nextInt();

        int fat = 1;

        while (num > 0) {
            fat *= num;
            num--;
        }

        System.out.printf("O fatorial desse número é " + fat);

        System.out.print("\n\n");
        input.close();
    }
}