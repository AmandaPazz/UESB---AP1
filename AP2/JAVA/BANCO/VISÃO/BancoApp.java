package BANCO.VISÃO;
import BANCO.CONTROLE.*;
import BANCO.MODELO.*;
import javax.swing.JOptionPane;

public class BancoApp {
    
    // Função para exibir o menu
    public static String menu() {
        return "Banco AP2\n\n" +
                "1-Criar Conta\n" +
                "2-Depositar Valor\n" +
                "3-Sacar Valor\n" +
                "4-Consultar Saldo\n" +
                "5-Mostrar Histórico\n" +
                "6-Imprimir Contas\n" +
                "7-Cadastrar Cliente\n" +
                "0-Finalizar\n\n" +
                "Digite a opção desejada:";
    }

    public static void main(String[] args) {
        int op;
        // Instâncias para controle de contas e clientes
        ControleConta cConta = new ControleConta();
        ControleCliente cCliente = new ControleCliente();
        // Obtendo a opção do usuário a partir do menu
        op = Integer.parseInt(JOptionPane.showInputDialog(menu()));
        
        // Loop para manter o programa em execução até que o usuário escolha finalizar (opção 0)
        while (op != 0) {
            switch (op) {
                case 1: { // Criar conta
                    long cpf = Long.parseLong(JOptionPane.showInputDialog("Digite o CPF do cliente:"));
                    Cliente c = cCliente.pesquisarCliente(cpf);
                    if (c != null) {
                        cConta.cadastrarConta(c);
                        JOptionPane.showMessageDialog(null, "Conta cadastrada com sucesso!");
                    } else {
                        JOptionPane.showMessageDialog(null, "CPF inválido");
                    }
                    break;
                }
                case 2: { // Depositar
                    int numConta = Integer.parseInt(JOptionPane.showInputDialog("Digite o numero da conta:"));
                    double valor = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor do deposito:"));
                    cConta.depositar(numConta, valor);
                    JOptionPane.showMessageDialog(null, "Deposito realizado com sucesso");
                    break;
                }
                case 3: { // Sacar
                    int numConta = Integer.parseInt(JOptionPane.showInputDialog("Digite o numero da conta:"));
                    double valor = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor do saque:"));
                    if (cConta.sacar(numConta, valor)) {
                        JOptionPane.showMessageDialog(null, "Saque realizado com sucesso");
                    } else {
                        JOptionPane.showMessageDialog(null, "Valor inválido");
                    }
                    break;
                }
                case 4: { // Consultar saldo
                    int numConta = Integer.parseInt(JOptionPane.showInputDialog("Digite o numero da conta:"));
                    JOptionPane.showMessageDialog(null, "Conta: " + numConta + "\nSaldo: " + cConta.consultarSaldo(numConta));
                    break;
                }
                case 5: { // Mostrar histórico
                    int numConta = Integer.parseInt(JOptionPane.showInputDialog("Digite o numero da conta:"));
                    JOptionPane.showMessageDialog(null, cConta.mostrarHistorico(numConta));
                    break;
                }
                case 6: { // Imprimir contas
                    JOptionPane.showMessageDialog(null, cConta.imprimirContas());
                    break;
                }
                case 7: { // Cadastrar cliente
                    String nome = JOptionPane.showInputDialog("Digite o nome do cliente:");
                    long cpf = Long.parseLong(JOptionPane.showInputDialog("Digite o CPF:"));
                    cCliente.cadastrarCliente(nome, cpf);
                    JOptionPane.showMessageDialog(null, "Cliente cadastrado com sucesso!");
                    break;
                }
            }
            // Obtendo a próxima opção do usuário
            op = Integer.parseInt(JOptionPane.showInputDialog(menu()));
        }
    }
}
