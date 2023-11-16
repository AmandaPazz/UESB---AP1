import java.util.Scanner;

class Fatorial {

    static int calcular(int n){
        if(n==0){
            return 1;
        }
        return n*calcular(n-1);
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o núemro que deseja calcular o fatorial: ");
        int num = input.nextInt();
        int resultado = calcular(num);
        System.out.println(resultado);

        input.close();
        System.out.println("\n\n");

    }
}
