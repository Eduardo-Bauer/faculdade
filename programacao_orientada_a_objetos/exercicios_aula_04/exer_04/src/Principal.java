import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Principal p = new Principal();
        int[] vetor = new int[50];
        int cont = 0, numero;
        String continuar;

        do{
            System.out.println("digite um numero:");
            vetor[cont++] = sc.nextInt();

            System.out.println("voce quer continuar?: S-sim e N-nao");
            continuar = sc.next();

        }while(continuar.toUpperCase().equals("S"));

        p.mostrarVetor(vetor, cont);

        System.out.println("digite o numero para multiplicar:");
        numero = sc.nextInt();

        for(int i = 0; i < cont; i++){
            vetor[i] *= numero;
        }

        p.mostrarVetor(vetor, cont);
    }

    public void mostrarVetor(int[] vetor, int cont){
        for(int i = 0; i < cont; i++){
            System.out.println(vetor[i]);
        }
    }
}
