package aula_04;

public class Carro {
	private
		String nome;
		int qtdPessoas;
		int pesoMaximo;
		Pessoa[] pessoas;
		
		public Carro(String nome, int qtdPessoas, int pesoMaximo) {
			this.nome = nome;
			this.qtdPessoas = qtdPessoas;
			this.pesoMaximo = pesoMaximo;
			this.pessoas = new Pessoa[qtdPessoas];
		}
		
		private int getPosicaoVaga() {
			for(int i = 0; i < this.pessoas.length; i++) {
				if(this.pessoas[i] == null) {
					return i;
				}
			}
			
			return -1;
		}
		
		private boolean calcularPeso(Pessoa p) {
			return (this.pesoMaximo - this.getPesoTotal() >= p.getPeso());
		}
		
		public int getQuantosPassageiros() {
			int pessoas = 0;
			for(Pessoa p : this.pessoas) {
				if(p!=null) {
					pessoas ++;
				}
			}
			return pessoas;
		}
		
		public int getPesoTotal() {
			int peso = 0;
			
			for(Pessoa p : this.pessoas) {
				if(p!=null) {
					peso += p.getPeso();
				}
			}
			return peso;
		}
		
		public boolean embarcar(Pessoa p) {
			int pos = this.getPosicaoVaga();
			
			if(pos >= 0 && this.calcularPeso(p)) {
				p.setCarro(this);
				this.pessoas[pos] = p;
				return true;
			}
			
			return false;
		}
		
		private int getPosicaoPessoa(String nome) {
			for(int i = 0; i < this.pessoas.length; i++) {
				Pessoa p = this.pessoas[i];
				if(p != null && nome.equals(this.pessoas[i].getNome())) {
					return i;
				}
			}
			return -1;
		}
		
		public boolean desembarcar(String nome) {
			int pos = this.getPosicaoPessoa(nome);
			if(pos < 0) {
				return false;
			}
			this.pessoas[pos].setCarro(null);
			this.pessoas[pos] = null;
			return true;
		}
		
		public String getNome() {
			return nome;
		}
		
		public void setNome(String nome) {
			this.nome = nome;
		}
		
		public int getQtdPessoas() {
			return qtdPessoas;
		}
		
		public void setQtdPessoas(int qtdPessoas) {
			this.qtdPessoas = qtdPessoas;
		}
		
		public int getPesoMaximo() {
			return pesoMaximo;
		}
		
		public void setPesoMaximo(int pesoMaximo) {
			this.pesoMaximo = pesoMaximo;
		}

		public String toString() {
			StringBuilder sb = new StringBuilder();
			sb.append("nome: ");
			sb.append(this.getNome() + "\n");
			sb.append("capacidade pessoas: ");
			sb.append(this.getQtdPessoas() + "\n");
			sb.append("peso maximo: ");
			sb.append(this.getPesoMaximo() + "\n");
			
			return sb.toString();
		}
		
		public String getSituacao() {
			StringBuilder sb = new StringBuilder();
			
			sb.append("peso total: ");
			sb.append(this.getPesoTotal() + "\n");
			
			sb.append("numero de passageiros: ");
			sb.append(this.getQuantosPassageiros() + "\n");
			
			sb.append("passageiros:\n");
			for(Pessoa p : this.pessoas) {
				if(p!=null) {
					sb.append(p.getNome() + " : " + p.getPeso() + "kg\n");
				}
			}
			
			return sb.toString();
		}
}
