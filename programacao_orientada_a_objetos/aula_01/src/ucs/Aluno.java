package ucs;

public class Aluno {
	
	private 
		String nome;
		int matricula;
		
	private boolean validarNome(String nome) {
		return !(nome == null || nome.length() == 0);
	}
	
	public void setNome(String nome) {
		if(this.validarNome(nome)) {
			this.nome = nome;
			
		}else {
			this.nome = "Não informado";
		}
	}
	
	public String getNome() {
		return this.nome;
	}

	public int getMatricula() {
		return matricula;
	}

	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
	
	public void mostrarAluno() {
		System.out.println("--------------------------------");
		System.out.println("|            Aluno             |");
		System.out.println("--------------------------------");
		System.out.println("Nome: " + this.nome);
		System.out.println("Matricula: " + this.matricula);
		System.out.println("--------------------------------");
	}
	
}
