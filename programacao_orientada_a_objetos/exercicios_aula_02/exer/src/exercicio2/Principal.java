package exercicio2;

import java.util.Scanner;


public class Principal {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Haras haras = new Haras();
        Principal p = new Principal();

        p.lerCavalos(haras, sc);
        p.calcularFerraduras(haras);
        p.mostrarFerraduras(haras);

        sc.close();
    }

    public void lerCavalos(Haras h, Scanner sc){
        System.out.println("Digite a quantidade de cavalos:");
        h.setQtdCamalos(sc.nextInt());
    }

    public void calcularFerraduras(Haras h){
        h.setQtdFerraduras();
    }

    public void mostrarFerraduras(Haras h){
        System.out.println("Você necessita de " + h.getQtdFerraduras() + " ferraduras");
    }
}
