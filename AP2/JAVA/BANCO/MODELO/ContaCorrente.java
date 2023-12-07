package BANCO.MODELO;
import BANCO.MODELO.Conta;
public class ContaCorrente extends Conta {
    private double limite;

    public ContaCorrente(Cliente cliente) {
        super(cliente);
        this.limite = 0.0;
    }

    public ContaCorrente(Cliente cliente, double saldo, double limite) {
        super(cliente, saldo);
        this.limite = limite;
    }

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }

    @Override
    public boolean sacar(double valor) {
        double saldoComLimite = getSaldo() + limite;
        if (saldoComLimite >= valor && valor > 0) {
            setSaldo(getSaldo() - valor);
            historico.add("Saque Conta Corrente: R$ " + valor);
            return true;
        }
        return false;
    }

    // Possíveis métodos específicos da Conta Corrente
}



