public class Animal {
    private
        String nome;
        String especie;
        String raca;
        int id;
        int idade;
        Consulta consulta;

    public String getNome(){
        return this.nome;
    }

    public String getEspecie(){
        return this.especie;
    }

    public String getRaca(){
        return this.raca;
    }

    public int getId(){
        return this.id;
    }

    public int getIdade(){
        return this.idade;
    }

    public Consulta getConsulta(){
        return this.consulta;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public void setEspecie(String especie){
        this.especie = especie;
    }

    public void setRaca(String raca){
        this.raca = raca;
    }

    public void setId(int id){
        this.id = id;
    }

    public void setIdade(int idade){
        this.idade = idade;
    }

    public void setConsulta(Consulta consulta){
        this.consulta = consulta;
    }

    public String toString(){
        return "\n----Dados do Animal----\n" +
                "Nome: " + this.nome + "\n" +
                "Especie: " + this.especie + "\n" +
                "Raca: " + this.raca + "\n" +
                "Idade: " + this.idade + "\n";
    }
}
