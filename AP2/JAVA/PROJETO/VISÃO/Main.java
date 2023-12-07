package PROJETO.VISÃO;

import java.util.ArrayList;
import PROJETO.MODELO.Produto;
import javax.swing.JOptionPane;
import PROJETO.MODELO.Livro;

public class Main {
    public static void main(String [] args){
        ArrayList<Produto> produtos = new ArrayList();
        String resultado = "";

        produtos.add(new Livro("Java Como Programar", 1000, 300));
        produtos.add(new Produto("Lápis preto", 2));
        produtos.add(new Produto("Caneta azul", 3.5));
        produtos.add(new Livro("A hora da estrela", 37.8, 120));

        for (int i = 0; i < produtos.size(); i++) {
            resultado = resultado + produtos.get(i).toString() + "\n--------\n";
            if (produtos.get(i) instanceof Livro) {
                ((Livro) produtos.get(i)).ehGrande();
            }
        }

        JOptionPane.showMessageDialog(null, resultado);
    }
}
