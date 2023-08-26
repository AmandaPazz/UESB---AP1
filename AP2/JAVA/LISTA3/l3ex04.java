import java.util.Scanner;

public class l3ex04 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o número que quer realizar a tabuada: \n");
        int num = input.nextInt();

        System.out.println("\n\nTabuada de " + num + " :");

        int a = 1 + (int) Math.floor(Math.log10(num));

        for (int i = 0; i <= 10; i++) {
            System.out.printf("%" + a + "d x %2d = %2d%n", num, i, (num * i));
        }

        System.out.print("\n\n");
        input.close();
    }
}