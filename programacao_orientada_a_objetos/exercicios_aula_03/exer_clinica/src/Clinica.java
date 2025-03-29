import java.text.ParseException;
import java.util.Scanner;

public class Clinica {
    public static void main(String[] args){
        Clinica cl = new Clinica();
        Scanner sc = new Scanner(System.in);
        Cliente cliente = new Cliente();

        cl.cadastrarCliente(cliente, sc);
        cliente.setAnimal(cl.cadastrarAnimal(sc));

        try {
            cliente.animal.setConsulta(cl.registrarConsulta(sc));
        } catch (ParseException e) {
            System.out.println("Digite a data conforme informado na orientação");
        }

        System.out.println(cliente);
        System.out.println(cliente.animal);
        System.out.println(cliente.animal.consulta);

        sc.close();
    }

    public void cadastrarCliente(Cliente cliente, Scanner sc){
        System.out.println("\n---------Cadastro de cliente---------\n");

        System.out.println("Digite o nome do cliente: ");
        cliente.setNome(sc.nextLine());

        System.out.println("Digite o cpf do cliente: ");
        cliente.setCpf(sc.nextLine());

        System.out.println("Digite o email do cliente: ");
        cliente.setEmail(sc.nextLine());

        System.out.println("Digite o telefone do cliente: ");
        cliente.setTelefone(sc.nextLine());
    }

    public Animal cadastrarAnimal(Scanner sc){
        System.out.println("\n---------Cadastro de animal---------\n");
        Animal animal = new Animal();

        System.out.println("Digite o nome do animal: ");
        animal.setNome(sc.nextLine());

        System.out.println("Digite a espécie do animal: ");
        animal.setEspecie(sc.nextLine());

        System.out.println("Digite a raca do animal: ");
        animal.setRaca(sc.nextLine());

        System.out.println("Digite a idade do animal: ");
        animal.setIdade(sc.nextInt());

        animal.setId(1);
        return animal;
    }

    public Consulta registrarConsulta(Scanner sc) throws ParseException {
        System.out.println("\n---------Registro de consulta---------\n");
        Consulta consulta = new Consulta();

        System.out.println("Digite a data da consulta no formato dia/mes/ano: ");
        consulta.setData(sc.next());
        sc.nextLine();

        System.out.println("Digite se houver observações sobre a consulta: ");
        consulta.setObs(sc.nextLine());

        System.out.println("Digite o tratamento necessário: ");
        consulta.setTratamento(sc.nextLine());

        return consulta;
    }

}
