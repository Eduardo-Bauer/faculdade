package ficha;

public class FichaDeInscricao {
	private
		String nome;
		String endereco;
		String cidade;
		String estado;
		String telefone;
		String email;
		boolean pago;
		static final double INVESTIMENTO = 20;
		
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getEndereco() {
		return endereco;
	}
	
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}
	
	public String getCidade() {
		return cidade;
	}
	
	public void setCidade(String cidade) {
		this.cidade = cidade;
	}
	
	public String getEstado() {
		return estado;
	}
	
	public void setEstado(String estado) {
		this.estado = estado;
	}
	
	public String getTelefone() {
		return telefone;
	}
	
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	
	public String getEmail() {
		return email;
	}
	
	public void setEmail(String email) {
		this.email = email;
	}
	
	public boolean isPago() {
		return pago;
	}

	public void setPago(boolean pago) {
		this.pago = pago;
	}

	public static double getInvestimento() {
		return INVESTIMENTO;
	}
	
	public FichaDeInscricao() {
		
	}
	
	public FichaDeInscricao(String nome, String endereco, String cidade, String estado, String telefone, String email) {
		setNome(nome);
		setEndereco(endereco);
		setCidade(cidade);
		setEstado(estado);
		setTelefone(telefone);
		setEmail(email);
	}
	
	public String toString() {
		return "Nome = " + this.nome + 
				"\nEndereco = " + this.endereco +
				"\nCidade = " + this.cidade + 
				"\nEstado = " + this.estado +
				"\nTelefone = " + this.telefone +
				"\nemail = " + this.email + "\n" +
				(this.isPago() ? "Pago" : "Nao pago");
	}
}
