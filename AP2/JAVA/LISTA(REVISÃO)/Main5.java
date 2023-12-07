
class Pneus {
    private double preco;
    private String tipo;
    private String fabricante;

    Pneus(double preco, String tipo, String fabricante) {
        this.preco = preco;
        this.tipo = tipo;
        this.fabricante = fabricante;
    }

    String gettipo(){
        return this.tipo;
    }
    String getfrabicante(){
        return this.fabricante;
    }

    double getpreco() {
        return this.preco;
    }
}

class Motor {
    private double preco;
    private double potencia;
    private String fabricante;

    Motor(double preco, double potencia, String fabricante) {
        this.preco = preco;
        this.potencia = potencia;
        this.fabricante = fabricante;
    }

    double getpotencia(){
        return this.potencia;
    }
    String getfrabicante(){
        return this.fabricante;
    }

    double getpreco() {
        return this.preco;
    }
}

class Bancos {
    private double preco;
    private String modelo;
    private String fabricante;

    Bancos(double preco, String modelo, String fabricante) {
        this.preco = preco;
        this.modelo = modelo;
        this.fabricante = fabricante;
    }

      String getmoedelo(){
        return this.modelo;
    }
    String getfrabicante(){
        return this.fabricante;
    }

    double getpreco() {
        return this.preco;
    }
}

class Carro {
    private Pneus pneu;
    private Motor motor;
    private Bancos banco;

    Carro(Pneus pneu, Motor motor, Bancos banco) {
        this.pneu = pneu;
        this.motor = motor;
        this.banco = banco;
    }

    double calcular() {
        return pneu.getpreco() + motor.getpreco() + banco.getpreco();
    }
}

class Main5 {
    public static void main(String[] args) {
        // Criando instâncias de Pneus, Motor e Bancos
        Pneus pneus1 = new Pneus(200, "Esportivo", "Pirelli");
        Motor motor1 = new Motor(300, 5000, "Honda");
        Bancos bancos1 = new Bancos(1000, "Esportivo", "Sparco");

        Pneus pneus2 = new Pneus(180, "Passeio", "Michelin");
        Motor motor2 = new Motor(200, 4000, "Toyota");
        Bancos bancos2 = new Bancos(800, "Conforto", "Recaro");

        Pneus pneus3 = new Pneus(220, "Off-road", "Goodyear");
        Motor motor3 = new Motor(250, 4500, "BMW");
        Bancos bancos3 = new Bancos(1200, "Luxo", "Bentley");

        // Criando instâncias de Carro
        Carro carro1 = new Carro(pneus1, motor1, bancos1);
        Carro carro2 = new Carro(pneus2, motor2, bancos2);
        Carro carro3 = new Carro(pneus3, motor3, bancos3);

        // Imprimindo o preço total de cada carro
        System.out.println("Preço total do Carro 1: $" + carro1.calcular());
        System.out.println("Preço total do Carro 2: $" + carro2.calcular());
        System.out.println("Preço total do Carro 3: $" + carro3.calcular());
    }

}


