package ficha;

import java.util.Scanner;

public class Congresso {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Congresso c = new Congresso();
		
		FichaDeInscricao f1 = c.criaFicha(sc);
		
		System.out.println("----Segundo medico----");
		
		FichaDeInscricao f2 = c.criaFicha(sc);
		
		//FichaDeInscricao f3 = new FichaDeInscricao("eduardo", null, "nova petropolis", "rio grande do sul", "5499999-9999", "eduardofbauer@gmail.com");
	
		System.out.println(f1);
		System.out.println(f2);
	}

	public FichaDeInscricao criaFicha(Scanner sc) {
		FichaDeInscricao f1 = new FichaDeInscricao();
		
		System.out.println("----Digite os dados do medico----\n");
		
		System.out.println("Digite o nome do médico: ");
		f1.setNome(sc.nextLine());
		
		System.out.println("Digite o endereco: ");
		f1.setEndereco(sc.nextLine());
		
		System.out.println("Digite a cidade: ");
		f1.setCidade(sc.nextLine());
		
		System.out.println("Digite o estado: ");
		f1.setEstado(sc.nextLine());
		
		System.out.println("Digite o telefone: ");
		f1.setTelefone(sc.nextLine());
		
		System.out.println("Digite o email: ");
		f1.setEmail(sc.nextLine());
		
		System.out.println("Digite se foi pago: S - sim | N - nao: ");
		String s = sc.nextLine().toUpperCase();
		if(s.equals("S")) {
			f1.setPago(true);
		}
		
		return f1;
	}
}
