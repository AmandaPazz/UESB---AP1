package PROJETO.MODELO;

public class Livro extends Produto {
    private int paginas;

    public Livro(String nome, double preco, int paginas){
        super(nome, preco);
        this.paginas = paginas;
    }

    public int getPaginas(){
        return this.paginas;
    }

    public boolean ehGrande(){
        return paginas > 200;
    }

    @Override
    public String toString(){
        return super.toString() + 
        "\nNúmero de Páginas: " + this.paginas +
        "\nÉ Grande? " + (ehGrande() ? "Sim" : "Não");
    }
    
}
