import java.util.Scanner;

class Palindrom{

   static String calcular (String a){
        if (a.length() <= 1){
            return "É palíndromo";
        }

        if (a.charAt(0) != a.charAt(a.length()-1)){
            return "Não é palíndromo";
        }
       
        return calcular(a.substring(1, a.length()-1));

        
    }

    public static void main (String [] args){
        Scanner input = new Scanner(System.in);
        String frase = input.nextLine();

        System.out.println(calcular(frase));

        System.out.println("\n\n");
        input.close();
    }

}