import java.util.Scanner;

class Fibonacci {

    static int calcular(int n) {
        if (n <= 1) {
            return 1;
        }
        return calcular(n - 1) + calcular(n - 2);
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o número da ordem da sequência de Fibonacci: ");
        int num = input.nextInt();
        System.out.print("\033[H\033[2J");
        
        

        System.out.println("Sequência de Fibonacci até a posição número " + num);
        for (int i = 0; i < num; i++) {
            int cal = calcular(i);
            System.out.print(cal + ", ");
        }
        
       
        System.out.print("\b\b ");

        input.close();
        System.out.print("\n\n");
    }
}
