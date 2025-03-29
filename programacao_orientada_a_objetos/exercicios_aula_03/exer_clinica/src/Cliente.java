public class Cliente {
    private
        String nome;
        String cpf;
        String email;
        String telefone;
        Animal animal;

    public String getNome(){
        return this.nome;
    }

    public String getCpf(){
        return this.cpf;
    }

    public String getEmail(){
        return this.email;
    }

    public String getTelefone(){
        return this.telefone;
    }

    public Animal getAnimal(){
        return this.animal;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public void setCpf(String cpf){
        this.cpf = cpf;
    }

    public void setEmail(String email){
        this.email = email;
    }

    public void setTelefone(String telefone){
        this.telefone = telefone;
    }

    public void setAnimal(Animal animal){
        this.animal = animal;
    }

    public String toString(){
        return "\n----Dados do Cliente----\n" +
                "Nome: " + this.nome + "\n" +
                "Cpf: " + this.cpf + "\n" +
                "Email: " + this.email + "\n" +
                "Telefone: " + this.telefone + "\n";
    }
}
