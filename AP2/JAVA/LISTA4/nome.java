import java.util.Scanner;

public class nome {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Digite o seu nome completo: ");
        String nome = input.nextLine();
        String nomep = nome;
        System.out.print("\n");

        nome = nome.trim().toLowerCase();

        if (nome.startsWith("a")) {
            System.out.println("O nome começa com a letra 'A'");
        } else {
            System.out.println("O nome não começa com a letra 'A'");
        }

        if (nome.endsWith("da silva")) {
            System.out.println("O nome termina com a 'da Silva'");
        } else {
            System.out.println("O nome não termina com 'da Silva'");
        }

        nome = nome.replaceAll("\\s+", "");
        System.out.println("O nome possui " + nome.length() + " caracteres");
        nome = nomep;

        nome = nome.replaceAll("e", "-");
        nome = nome.replaceAll("E", "-");
        System.out.println("O nome sem a letra 'e' fica: " + nome);
        nome = nomep;

        int ultimoEspaco = nome.lastIndexOf(" ");
        String sobrenome = nome.substring(ultimoEspaco + 1);
        sobrenome = sobrenome.toUpperCase();
        System.out.println("O seu sobrenome em maiúsculo é: " + sobrenome);
        nome = nomep;

        String iniciais = "";
        String partes[] = nome.split("\\s+");

        partes[0] = partes[0].toLowerCase();
        iniciais += partes[0].charAt(0) + " ";

        partes[partes.length - 1] = partes[partes.length - 1].toLowerCase();
        iniciais += partes[partes.length - 1].charAt(0) + " ";

        System.out.println("A iniciais minúsculas são: " + iniciais);


        nome = nome.trim().replaceAll("\\s+", " ");
        for (int i = 0; i < partes.length; i++){
            String n = partes[i];
            partes[i] = Character.toUpperCase(n.charAt(0)) + n.substring(1).toLowerCase();
        }

        nome = String.join(" ", partes);
        System.out.println("Seu nome formatado fica: " + nome);

        System.out.println("Seu nome imprimido em partes fica: ");

        for (String p : partes){
            System.out.printf("%-10s\n", p);
        }


        System.out.print("\n\n");
        input.close();
    }
}