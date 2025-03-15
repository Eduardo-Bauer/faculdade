package ucs;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		Aluno a1 = new Aluno();
		
		System.out.println("Digite o nome do aluno");
		a1.setNome(scanner.nextLine());
		
		System.out.println("Digite o numero da matricula");
		a1.setMatricula(scanner.nextInt());
		
		a1.mostrarAluno();
		
		scanner.close();
	}
}
