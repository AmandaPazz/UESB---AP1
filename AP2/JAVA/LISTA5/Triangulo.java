  class Triangulo {
    private double base;
    private double altura;

    Triangulo(double base, double altura){
        this.base = base;
        this.altura = altura;
    }

    double area(){
        return this.base * this.altura;
    }

    public static void main(String[] args) {
        Triangulo poligono = new Triangulo(45.5, 2);

        System.out.println("A ÁREA DO TRIÂNGULO É: " + poligono.area());
    }
}
