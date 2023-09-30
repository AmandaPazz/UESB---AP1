import java.util.Scanner;

public class l3ex06 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int a = 0;
        int b = 1;

        for (int i = 0; i < n; i ++){
            System.out.printf(a  + " ");

            int proximo = a + b;
            a = b;
            b = proximo;
        }

        System.out.print("\n\n");
        input.close();
    }
}