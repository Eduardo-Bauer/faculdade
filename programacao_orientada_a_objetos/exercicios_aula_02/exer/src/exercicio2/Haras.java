package exercicio2;

public class Haras {
    private
        int qtdCamalos;
        int qtdFerraduras;

    public void setQtdCamalos(int qtdCamalos) {
        this.qtdCamalos = qtdCamalos;
    }

    public void setQtdFerraduras() {
        this.qtdFerraduras = this.qtdCamalos * 4;
    }

    public int getQtdCamalos() {
        return this.qtdCamalos;
    }

    public int getQtdFerraduras() {
        return this.qtdFerraduras;
    }

    public Haras(){

    }

}
