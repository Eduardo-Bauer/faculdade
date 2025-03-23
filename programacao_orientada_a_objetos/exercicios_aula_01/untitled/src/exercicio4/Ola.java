package exercicio4;

import java.util.Scanner;

public class Ola {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("digite o seu nome:");
        String nomeUsuario = sc.nextLine();

        System.out.println("Olá " + nomeUsuario + "! Tudo bem com você?");
    }
}
