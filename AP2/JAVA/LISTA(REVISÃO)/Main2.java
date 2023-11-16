import java.util.ArrayList;

class jogador {
    private String nome;

    jogador(String nome) {
        this.nome = nome;
    }

    String getnome() {
        return this.nome;
    }

    void setnome(String nome) {
        this.nome = nome;
    }

}

class time {
    private String nome;
    private ArrayList<jogador> jogadores;

    time(String nome) {
        this.nome = nome;
        this.jogadores = new ArrayList<>();
    }

    void setnome(String nome) {
        this.nome = nome;
    }

    void addJogador(jogador jogador) {
        this.jogadores.add(jogador);
    }

    void remJogador(jogador jogador) {
        this.jogadores.remove(jogador);
    }

    String getnome() {
        return this.nome;
    }

    ArrayList<jogador> getJogadores() {
        return this.jogadores;
    }

}

class Main2 {
    public static void main(String[] args) {
        jogador jogador1 = new jogador("Carlos");
        jogador jogador2 = new jogador("Maria");

        time time = new time("Time A");

        time.addJogador(jogador1);
        time.addJogador(jogador2);

        System.out.println("Nome do Time: " + time.getnome());
        System.out.println("Jogadores do Time:");
        for (jogador jogador : time.getJogadores()) {
            System.out.println("- " + jogador.getnome());
        }
    }
}