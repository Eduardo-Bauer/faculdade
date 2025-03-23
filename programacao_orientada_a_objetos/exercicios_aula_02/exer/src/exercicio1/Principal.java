package exercicio1;

import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Terreno terreno = new Terreno();
        Principal p = new Principal();

        p.lerLado(terreno, sc);
        p.lerAltura(terreno, sc);
        p.calcularAreaTerreno(terreno);
        p.mostrarAreaTerreno(terreno);

        sc.close();
    }

    public void lerLado(Terreno terreno, Scanner sc){
        System.out.println("digite a largura do terreno:");
        terreno.setLado(sc.nextInt());
    }

    public void lerAltura(Terreno terreno, Scanner sc){
        System.out.println("digite a aultura do terreno:");
        terreno.setAltura(sc.nextInt());
    }

    public void calcularAreaTerreno(Terreno terreno){
        terreno.setAreaTerreno();
    }

    public void mostrarAreaTerreno(Terreno terreno){
        System.out.println("A area do terreno é: " + terreno.getAreaTerreno());
    }
}
