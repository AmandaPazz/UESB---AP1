

 class InteiroSet{
    private boolean [] conjunto;

    InteiroSet(){
        conjunto = new boolean[101];
    }

    InteiroSet union (InteiroSet outroConjunto){
        InteiroSet uniao = new InteiroSet();
        for (int i = 0; i < conjunto.length; i++){
            uniao.conjunto[i] = this.conjunto[i] || outroConjunto.conjunto[i];
        }
        return uniao;
    }

    InteiroSet interseccao (InteiroSet outroConjunto){
        InteiroSet uniao = new InteiroSet();
        for (int i = 0; i < conjunto.length; i++){
            uniao.conjunto[i] = this.conjunto[i] && outroConjunto.conjunto[i];
        }
        return uniao;
    }

    void insereElemento (int k){
        if (k >= 0 && k <= 100){
            this.conjunto[k] = true;
        }
        else {
            System.out.println("Fora do intervalo permitido (0 a 100)");
        }
    }

    void deleteElemento (int m){
         if (m >= 0 && m <= 100){
            this.conjunto[m] = false;
        }
        else {
            System.out.println("Fora do intervalo permitido (0 a 100)");
        }
    }

    String toSetString(){
        String sb = "";
        boolean vazio = true;

        for (int i = 0; i < this.conjunto.length; i++){
            if (conjunto[i]){
                sb += i + " ";
                vazio = false;
            }
        }

        if (vazio){
            return "-";
        }

        return sb.trim();
    }


    boolean ehIgualA (InteiroSet outroConjunto){
        for(int i = 0; i < this.conjunto.length; i++){
            if(this.conjunto[i] != outroConjunto.conjunto[i]){
                return false;
            }
        }
        return true;
    }


    public static void main (String args[]){
        InteiroSet conjunto1 = new InteiroSet();
        InteiroSet conjunto2 = new InteiroSet();

        conjunto1.insereElemento(5);
        conjunto1.insereElemento(10);
        conjunto1.insereElemento(20);

        conjunto2.insereElemento(10);
        conjunto2.insereElemento(15);
        conjunto2.insereElemento(20);

        InteiroSet uniao = conjunto1.union(conjunto2);
        System.out.println("União: " + uniao.toSetString());

        InteiroSet interseccao = conjunto1.interseccao(conjunto2);
        System.out.println("Interseção: " + interseccao.toSetString());

        conjunto1.insereElemento(15);
        conjunto2.insereElemento(5);

        System.out.println("Conjunto 1 igual ao Conjunto 2? " + conjunto1.ehIgualA(conjunto2));
    }

    }







