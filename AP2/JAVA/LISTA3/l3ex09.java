import java.util.Scanner;

public class l3ex09 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite sua frase: ");
        String frase = input.nextLine();

        int num = 0;

        for(int i = 0; i < frase.length(); i++){
            if (Character.isUpperCase(frase.charAt(i))){
                num++;
            }
        }

        System.out.print("Existem "+ num + " caracteres maiúsculos nessa frase");
      
            
    

        System.out.print("\n\n");
        input.close();
    }
}