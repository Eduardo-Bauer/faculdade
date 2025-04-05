package aula_04;

public class Principal {
	public static void main(String[] args) {
		Carro c = new Carro("Gol", 5, 400);
		
		System.out.println(c);
		
		Pessoa p1 = new Pessoa("eduardo", 50);
		
		if(c.embarcar(p1)) {
			System.out.println("Embarcou " + p1.getNome());
		}else {
			System.out.println("não deu");
		}
		
		System.out.println(c.getSituacao());
		
		p1 = new Pessoa("teste", 50);
		
		if(c.embarcar(p1)) {
			System.out.println("Embarcou " + p1.getNome());
		}else {
			System.out.println("não deu");
		}
		
		System.out.println(c.getSituacao());
		
		if(c.desembarcar("a")) {
			System.out.println("desembarcado");
		}else {
			System.out.println("nao encontrei para desimbarcar");
		}
		
		System.out.println(c.getSituacao());
	}
}
