package exercicio4;

import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Funcionario f = new Funcionario();
        Principal p = new Principal();

        p.lerSalario(f, sc);
        p.lerSalarioMinimo(f, sc);
        p.calcularQtdSalariosMinimos(f);
        p.mostrarQtdSalariosMinimos(f);

        sc.close();
    }

    public void lerSalario(Funcionario f, Scanner sc){
        System.out.println("Digite o salario do funcionario:");
        f.setSalario(sc.nextDouble());
    }

    public void lerSalarioMinimo(Funcionario f, Scanner sc){
        System.out.println("digite o salario minimo:");
        f.setSalarioMinimo(sc.nextDouble());
    }

    public void calcularQtdSalariosMinimos(Funcionario f){
        f.setQtdSalariosMinimos();
    }

    public void mostrarQtdSalariosMinimos(Funcionario f){
        System.out.println("O funcionário ganha " + f.getQtdSalariosMinimos() + " salarios minimos");
    }
}
