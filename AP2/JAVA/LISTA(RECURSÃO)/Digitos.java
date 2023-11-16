import java.util.Scanner;

class Digitos{

   static int calcular (int n){

        if (n / 10 == 0){
            return n;
        }

        return (n%10) + calcular(n/10);
    }

    public static void main (String args []){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();

        System.out.println(calcular(num));

        System.out.println("\n\n");
        input.close();
    }




}