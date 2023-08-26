import java.util.Scanner;

public class l3ex03 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int acumulador = 0;

        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 0) {
                acumulador += i;
            }
        }

        System.out.print(acumulador);

        System.out.print("\n\n");
        input.close();
    }
}