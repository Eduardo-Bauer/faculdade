package exercicio1;

public class Terreno {
    private
        int lado;
        int altura;
        int areaTerreno;
        double valorM2;
        double valorTerreno;
        Endereco endereco;
        Pessoa dono;

    public void setLado(int lado) {
        this.lado = lado;
    }

    public void setAltura(int altura){
        this.altura = altura;
    }

    public void setAreaTerreno(){
        this.areaTerreno = this.lado * this.altura;
    }

    public int getLado(){
        return this.lado;
    }

    public int getAltura(){
        return this.altura;
    }

    public int getAreaTerreno(){
        return this.areaTerreno;
    }
    

    public double getValorM2() {
		return valorM2;
	}

	public void setValorM2(double valorM2) {
		this.valorM2 = valorM2;
	}
	

	public double getValorTerreno() {
		return valorTerreno;
	}

	public void setValorTerreno() {
		this.valorTerreno = this.valorM2 * this.areaTerreno;
	}
	

	public Endereco getEndereco() {
		return endereco;
	}

	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}

	public Pessoa getDono() {
		return dono;
	}

	public void setDono(Pessoa dono) {
		this.dono = dono;
	}

	public Terreno(){

    }
}
