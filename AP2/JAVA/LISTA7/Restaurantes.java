import java.util.Scanner;

class Restaurantes {
    private String nome;
    private String endereco;
    private String tipo;
    private double preco;

    Restaurantes() {
    }

    Restaurantes(String nome, String endereco, String tipo, double preco) {
        this.nome = nome;
        this.endereco = endereco;
        this.tipo = tipo;
        this.preco = preco;
    }

    void setNome(String nome) {
        this.nome = nome;
    }

    void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    void setTipo(String tipo) {
        this.tipo = tipo;
    }

    void setPreco(double preco) {
        this.preco = preco;
    }

    String getNome() {
        return this.nome;
    }

    String getEndereco() {
        return this.endereco;
    }

    String getTipo() {
        return this.tipo;
    }

    double getPreco() {
        return this.preco;
    }

    @Override
    public String toString() {
        return "Restaurante: " + this.nome + "\nEndereço: " + this.endereco + "\nTipo: " + this.tipo + "\nPreço: "
                + this.preco;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int numRestaurantes;
        System.out.println("Quantos restaurantes você quer cadastrar?");
        numRestaurantes = input.nextInt();
        input.nextLine();
        System.out.print("\033[H\033[2J");

        Restaurantes vetor[] = new Restaurantes[numRestaurantes];

        for (int i = 0; i < numRestaurantes; i++) {
            String nome, tipo, endereco;
            double preco;

            System.out.println("RESTAURANTE " + (i + 1));

            System.out.println("Digite o nome do restaurante:");
            nome = input.nextLine();

            System.out.println("\nDigite o endereço do restaurante:");
            endereco = input.nextLine();

            System.out.println("\nDigite o tipo da comida:");
            tipo = input.nextLine();

            System.out.println("\nDigite o preço médio da comida:");
            preco = input.nextInt();
            input.nextLine();

            vetor[i] = new Restaurantes(nome, endereco, tipo, preco);
            System.out.print("\033[H\033[2J");

        }

        String busca;
        System.out.println("Qual o tipo de comida que deseja buscar?");
        busca = input.nextLine();
        System.out.print("\033[H\033[2J");

        System.out.println("LISTA DE RESTAURANTES COM ESSE TIPO DE COMIDA:");
        for (Restaurantes v : vetor) {
            if (v.getTipo().equalsIgnoreCase(busca)) {
                System.out.println(v.getNome());
            }
        }

        input.close();
        System.out.println("\n\n");

    }

}