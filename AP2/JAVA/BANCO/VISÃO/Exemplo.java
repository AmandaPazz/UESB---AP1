package BANCO.VISÃO;

import BANCO.MODELO.*;
import BANCO.CONTROLE.*;

public class Exemplo {
    public static void main(String[] args) {
        // Criando clientes
        Cliente cliente1 = new Cliente("João", 123);
        Cliente cliente2 = new Cliente("Maria", 456);

        // Criando contas
        ContaCorrente contaCorrenteJoao = new ContaCorrente(cliente1, 1000.0, 500.0);
        ContaPoupanca contaPoupancaMaria = new ContaPoupanca(cliente2, 5000.0, 0.05);

        // Exemplo de operações
        contaCorrenteJoao.depositar(500.0);
        contaPoupancaMaria.sacar(200.0);

        // Mostrando informações das contas
        System.out.println("Informações da Conta Corrente de João:");
        System.out.println(contaCorrenteJoao);

        System.out.println("\nInformações da Conta Poupança de Maria:");
        System.out.println(contaPoupancaMaria);
    }
}
