 class Retangulo {
    private double comprimento;
    private double largura;

    Retangulo(double comprimento, double largura){
        this.comprimento = comprimento;
        this.largura = largura;
    }

    double area (){
        return this.comprimento * this.largura;
    }

    public static void main(String[] args) {
        Retangulo ret = new Retangulo(50, 2);
        System.out.println("A ÁREA DO RETÂNGULO É: " + ret.area());
    }





}
