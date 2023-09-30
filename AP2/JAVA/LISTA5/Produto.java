public class Produto {
    private String nome;
    private double preco;
    private int quantidade;

    public Produto (){
        nome = null;
        preco = 0;
        quantidade = 0;
    }

    public void setNome (String nome){
        this.nome = nome;
    }

    public void setPreco(double preco){
        this.preco = preco;
    }

    public void setQuantidade (int quantidade){
        this.quantidade = quantidade;
    }

    public double ValorTotal(){
        return this.quantidade * this.preco;
    }

    public void addQuantidade(int adicional){
        this.quantidade += adicional;
    }

    public void remQuantidade(int remover){
        this.quantidade -= remover;
    }

    public String getNome(){
        return this.nome;
    }

    public double getPreco(){
        return this.preco;
    }

    public int getQuantidade(){
        return this.quantidade;
    }

    public static void main(String[] args) {
        Produto perfume = new Produto();

        perfume.setNome("Eilish");
        perfume.setPreco(250.00);
        perfume.setQuantidade(2);

        System.out.printf("%-30s: %-50s\n", "NOME DO PERFUME: ", perfume.getNome());
        System.out.printf("%-30s: %-50s\n", "PREÇO DO PERFUME: ", perfume.getPreco());
        System.out.printf("%-30s: %-50d\n", "QUANTIDADE NO ESTOQUE: ", perfume.getQuantidade());

        perfume.addQuantidade(10);
        System.out.printf("\n\n%-30s: %-50s\n", "PREÇO DO PERFUME: ", perfume.getQuantidade());

        perfume.remQuantidade(2);
        System.out.printf("\n\n%-30s: %-50s\n", "PREÇO DO PERFUME: ", perfume.getQuantidade());

        System.out.printf("\n\nVALOR TOTAL DO ESTOQUE: " + perfume.ValorTotal());

        System.out.println("\n\n");
    }
    }



