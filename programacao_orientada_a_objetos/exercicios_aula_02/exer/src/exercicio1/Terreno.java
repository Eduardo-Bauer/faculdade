package exercicio1;

public class Terreno {
    private
        int lado;
        int altura;
        int areaTerreno;


    public void setLado(int lado) {
        this.lado = lado;
    }

    public void setAltura(int altura){
        this.altura = altura;
    }

    public void setAreaTerreno(){
        this.areaTerreno = this.lado * this.altura;
    }

    public int getLado(){
        return this.lado;
    }

    public int getAltura(){
        return this.altura;
    }

    public int getAreaTerreno(){
        return this.areaTerreno;
    }

    public Terreno(){

    }
}
