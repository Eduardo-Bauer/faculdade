public class Automovel {
    private
        String marca;
        String nome;
        String cor;

    public String getMarca() {
        return marca;
    }

    public String getNome() {
        return nome;
    }

    public String getCor() {
        return cor;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public String getAutomovel(){
        StringBuilder s = new StringBuilder();
        s.append("marca: ");
        s.append(this.getMarca() + "\n");

        s.append("nome: ");
        s.append(this.getNome() + "\n");

        s.append("cor: ");
        s.append(this.getCor() + "\n");

        return s.toString();
    }
}
