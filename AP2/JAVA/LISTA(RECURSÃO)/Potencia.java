import java.util.Scanner;

class Potencia{

    static int calcular(int a, int b){
        if (b == 1){
            return a;
        }
        return a * calcular (a, b-1);

    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("Digite a potência que deseja calcular: ");
        int a = input.nextInt();
        int b = input.nextInt();
        System.out.print("\033[H\033[2J");

        System.out.print(calcular(a,b));

        System.out.println("\n\n");
        input.close();
    }









}