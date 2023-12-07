package BANCO.MODELO;

public class ContaPoupanca extends Conta {
    private double taxaRendimento;

    public ContaPoupanca(Cliente cliente) {
        super(cliente);
        this.taxaRendimento = 0.0;
    }

    public ContaPoupanca(Cliente cliente, double saldo, double taxaRendimento) {
        super(cliente, saldo);
        this.taxaRendimento = taxaRendimento;
    }

    public double getTaxaRendimento() {
        return taxaRendimento;
    }

    public void setTaxaRendimento(double taxaRendimento) {
        this.taxaRendimento = taxaRendimento;
    }

    // Possíveis métodos específicos da Conta Poupança
}