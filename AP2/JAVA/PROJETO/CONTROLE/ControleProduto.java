package PROJETO.CONTROLE;
import PROJETO.MODELO.Produto;
import PROJETO.MODELO.Livro;
import PROJETO.MODELO.LivroDidatico;
import java.util.ArrayList;

import javax.swing.JOptionPane;


public class ControleProduto {
    private ArrayList<Produto> produtos = new ArrayList();

    public void cadastrarProduto(String nome, double preco) {
        produtos.add(new Produto(nome, preco));
    }

    public void cadastrarProduto(String nome, double preco, int paginas) {
        produtos.add(new Livro(nome, preco, paginas));
    }
   
    public void cadastrarProduto(String nome, double preco, int paginas, String disciplina){
        produtos.add(new LivroDidatico(nome, preco, paginas, disciplina));
    }

    public Produto pesquisarProduto(int codigo) {
        Produto p = null;
        for (int i = 0; i < produtos.size(); i++) {
            if (codigo == produtos.get(i).getCodigo()) {
                p = produtos.get(i);
                break;
            }
        }
        return p;
    }

    public String imprimirProduto(int codigo) {
        Produto p = pesquisarProduto(codigo);
        if (p != null) {
            return p.toString();
        } else {
            return "Código inválido";
        }
    }

    public boolean produtoEhCaro(int codigo) {
        Produto p = pesquisarProduto(codigo);
        return p != null && p.ehCaro();
    }

  public static String menu(){
    return "Digite:\n" +
            "1 - Cadastrar produto \n" +
            "2 - Imprimir produto \n" +
            "3 - Verificar se é caro \n" +
            "0 - para sair";
}

public static void main(String[] args) {
    ControleProduto cp = new ControleProduto();
    int op;
    op = Integer.parseInt(JOptionPane.showInputDialog(menu()));
    
    while (op != 0) {
        switch (op) {
            case 1: { // cadastrar produto
                String nome;
                double preco;
                nome = JOptionPane.showInputDialog("Digite o nome do produto");
                preco = Double.parseDouble(JOptionPane.showInputDialog("Digite o preco do produto"));
                
                int op2 = Integer.parseInt(JOptionPane.showInputDialog("Este produto é um livro?\n1 - Sim\n2 - Não "));
                if (op2 == 1) {
                    int pag = Integer.parseInt(JOptionPane.showInputDialog("Digite o número de páginas do livro"));
                    String op3 = JOptionPane.showInputDialog("Digite a disciplina do livro");
                    cp.cadastrarProduto(nome, preco, pag, op3);
                } else {
                    cp.cadastrarProduto(nome, preco);
                }
                break;
            }
            case 2: { // Imprimir produto
                int codigo = Integer.parseInt(JOptionPane.showInputDialog("Digite o código do produto"));
                String resultado = cp.imprimirProduto(codigo);
                JOptionPane.showMessageDialog(null, resultado);
                break;
            }
            case 3: { // Verificar se é caro
                int codigo = Integer.parseInt(JOptionPane.showInputDialog("Digite o código do produto"));
                boolean caro = cp.produtoEhCaro(codigo);
                if (caro) {
                    JOptionPane.showMessageDialog(null, "O produto é caro!");
                } else {
                    JOptionPane.showMessageDialog(null, "O produto não é caro!");
                }
                break;
            }
        }
        op = Integer.parseInt(JOptionPane.showInputDialog(menu()));
    }
}

}


