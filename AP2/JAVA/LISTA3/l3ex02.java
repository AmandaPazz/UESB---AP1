import java.util.Scanner;

public class l3ex02 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int i = 10;

        while (i <= 10) {
            System.out.printf(" %d", i);
            i--;

            if (i == 0) {
                break;
            }
        }

        System.out.print("\n\n");
        input.close();
    }
}