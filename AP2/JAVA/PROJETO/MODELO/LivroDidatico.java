package PROJETO.MODELO;

import PROJETO.MODELO.Livro;

public class LivroDidatico extends Livro {
    private String disciplina;

    public LivroDidatico(String nome, double preco, int paginas, String disciplina){
        super(nome, preco, paginas);
        this.disciplina = disciplina;
    }

    public String getDisciplina() {
        return disciplina;
    }

    public void setDisciplina(String disciplina) {
        this.disciplina = disciplina;
    }

    @Override
    public boolean ehCaro(){
        return getPreco() > 200;
    }

    @Override
    public String toString(){
        return super.toString() +
                "\nDisciplina: " + this.disciplina;
    }
}
