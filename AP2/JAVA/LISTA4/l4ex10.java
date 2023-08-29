package LISTA4;

import java.util.Scanner;

public class l4ex10 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o seu nome completo ");
        String nome = input.nextLine();

        String[] partesDoNome = nome.split("\\s+");
        StringBuilder iniciais = new StringBuilder();

        for (String partes : partesDoNome) {
            partes = partes.trim();
            iniciais.append(partes.charAt(0));
        }

        String email = iniciais.toString().toLowerCase() + "@empresa.com.br";

        System.out.println("E-mail formatado: " + email + "\n");

        System.out.print("\n\n");
        input.close();

    }
}