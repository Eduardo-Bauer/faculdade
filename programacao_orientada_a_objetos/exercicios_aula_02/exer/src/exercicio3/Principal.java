package exercicio3;

import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Triangulo triangulo = new Triangulo();
        Principal p = new Principal();

        p.lerCatetoA(triangulo, sc);
        p.lerCatetoB(triangulo, sc);
        p.calcularHipotenusa(triangulo);
        p.mostrarHipotenusa(triangulo);

        sc.close();
    }

    public void lerCatetoA(Triangulo triangulo, Scanner sc){
        System.out.println("Digite o valor do cateto a");
        triangulo.setCatetoA(sc.nextInt());
    }

    public void lerCatetoB(Triangulo triangulo, Scanner sc){
        System.out.println("Digite o valor do cateto b");
        triangulo.setCatetoB(sc.nextInt());
    }

    public void calcularHipotenusa(Triangulo triangulo){
        triangulo.setHipotenusa();
    }

    public void mostrarHipotenusa(Triangulo triangulo){
        System.out.printf("A sua impotenusa é %.2f\n", triangulo.getHipotenusa());
    }
}
