package exercicio1;

import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Terreno terreno = new Terreno();
        Principal p = new Principal();

        p.lerLado(terreno, sc);
        p.lerAltura(terreno, sc);
        p.lerValorM2(terreno, sc);
        p.calcularAreaTerreno(terreno);
        p.calcularValorTerreno(terreno);
        p.mostrarAreaTerreno(terreno);
        p.mostrarValorTerreno(terreno);
        
        System.out.println("voce quer ler o endereco? (S=sim, N=não)");
        String resposta = sc.nextLine();
        
        if (resposta.toLowerCase().equals("s")) {
        	Endereco endereco = new Endereco();
        	System.out.println("digite a rua: ");
        	resposta = sc.nextLine();
        	endereco.setRua(resposta);
        	
        	terreno.setEndereco(endereco);
        }
        
        if(terreno.getEndereco() != null) {
        	Endereco endereco = terreno.getEndereco();
        	System.out.println("rua: " + endereco.getRua());
        }
        
        System.out.println("Quem é o dono do terreno?");
        resposta = sc.nextLine();
        Pessoa pessoa = new Pessoa();
        pessoa.setNome(resposta);
        terreno.setDono(pessoa);
        
        System.out.println("voce quer ler o endereco do dono? (S=sim, N=não)");
        resposta = sc.nextLine();
        
        if (resposta.toLowerCase().equals("s")) {
        	Endereco endereco = new Endereco();
        	System.out.println("digite a rua: ");
        	resposta = sc.nextLine();
        	endereco.setRua(resposta);
        	
        	pessoa.setEndereco(endereco);
        }
        
        if(pessoa.getEndereco() != null) {
        	Endereco endereco = pessoa.getEndereco();
        	System.out.println("rua: " + endereco.getRua());
        }
        
        System.out.println("nome do dono: " + terreno.dono.getNome());
        
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
    
    public void lerValorM2(Terreno terreno, Scanner sc) {
    	System.out.println("digite o valor do m²: ");
    	terreno.setValorM2(sc.nextDouble());
    	sc.nextLine();
    }

    public void calcularAreaTerreno(Terreno terreno){
        terreno.setAreaTerreno();
    }
    
    public void calcularValorTerreno(Terreno terreno){
    	terreno.setValorTerreno();
    }

    public void mostrarAreaTerreno(Terreno terreno){
        System.out.println("A area do terreno é: " + terreno.getAreaTerreno());
    }
    
    public void mostrarValorTerreno(Terreno terreno) {
    	System.out.println("O valor do terreno é: " + terreno.getValorTerreno());
    }
}