public class carro {
    private String marca;
    private String modelo;
    private int ano;

    public carro(){
        this.marca = null;
        this.modelo = null;
        this.ano = 0;
    }

    public String getMarca(){
        return this.marca;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }

    public String getModelo(){
        return this.modelo;
    }
    public void setModel(String modelo){
        this.modelo = modelo;
    }

    public int getAno(){
        return this.ano;
    }
    public void setaAno(int ano){
        this.ano = ano;
    }

}
