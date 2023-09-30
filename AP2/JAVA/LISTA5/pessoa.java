public class pessoa {
    private String nome;
    private int idade;

    public pessoa() {
        this.nome = "Sem nome";
        this.idade = 0;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String a) {
        this.nome = a;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int a) {
        this.idade = a;
    }

}
