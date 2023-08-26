import java.util.Scanner;

public class l3ex01 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        for (int i = 1; i <= 10; i++) {
            System.out.printf(" %d", i);
        }

        System.out.print("\n\n");
        input.close();
    }
}