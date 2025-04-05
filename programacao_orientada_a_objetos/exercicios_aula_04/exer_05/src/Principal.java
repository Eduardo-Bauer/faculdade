import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Principal p = new Principal();
        Automovel[] automoveis;

        System.out.println("digite a quantidade de automoveis: ");
        automoveis = new Automovel[sc.nextInt()];
        sc.nextLine();

        for(int i = 0; i < automoveis.length; i++){
            Automovel automovel = new Automovel();

            System.out.println("digite a marca do automoveis: ");
            automovel.setMarca(sc.nextLine());

            System.out.println("digite o nome do automoveis: ");
            automovel.setNome(sc.nextLine());

            System.out.println("digite a cor do automoveis: ");
            automovel.setCor(sc.nextLine());

            automoveis[i] = automovel;
        }

        for(Automovel i : automoveis){
            System.out.println(i.getAutomovel());
        }

        System.out.println("Cores dos automoveis:\n");

        String[] cores = p.criarVetorCorAutomovel(automoveis);

        p.mostrarCores(cores);
    }

    public String[] criarVetorCorAutomovel(Automovel[] automoveis){
        String[] coresAutomovel = new String[automoveis.length];

        for(int i = 0; i < automoveis.length; i++){
            coresAutomovel[i] = automoveis[i].getCor();
        }

        return coresAutomovel;
    }

    public void mostrarCores(String[] cores){
        for(String i : cores){
            System.out.println(i);
        }
    }
}
