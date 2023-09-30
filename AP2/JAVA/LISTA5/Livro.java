public class Livro {
    private String titulo;
    private String autor;
    private int paginas;

    public Livro(){
        this.titulo = null;
        this.autor = null;
        this.paginas = 0;
    }

    public String getTitulo(){
        return titulo;
    }
    public void setTitulo(String titulo){
        this.titulo = titulo;
    }

    public String getAutor(){
        return autor;
    }
    public void setAutor(String autor){
        this.autor = autor;
    }

    public int getPaginas(){
        return paginas;
    }
    public void setPaginas(int paginas){
        this.paginas = paginas;
    }
}