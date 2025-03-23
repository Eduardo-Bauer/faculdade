package exercicio3;

import java.lang.Math;

public class Triangulo {
    private
        int catetoA;
        int catetoB;
        double hipotenusa;

    public void setCatetoA(int cateto){
        this.catetoA = cateto;
    }

    public void setCatetoB(int cateto){
        this.catetoB = cateto;
    }

    public void setHipotenusa(){
        this.hipotenusa = (double) Math.sqrt(Math.pow(this.catetoA, 2) + Math.pow(this.catetoB, 2));
    }

    public double getHipotenusa(){
        return this.hipotenusa;
    }

    public Triangulo(){

    }

}
