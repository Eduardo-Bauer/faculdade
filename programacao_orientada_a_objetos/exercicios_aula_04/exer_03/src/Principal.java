import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Principal p = new Principal();
        int[] vetor = new int[10];
        int numero;

        for(int i = 0; i < 10; i++){
            System.out.println("digite o valor do vetor: " + (i + 1));
            vetor[i] = sc.nextInt();
        }

        System.out.println("digite um numero para fazer a multiplicacao: ");
        numero = sc.nextInt();

        p.mostrarVetor(vetor);

        for(int i = 0; i < 10; i++){
            vetor[i] *= numero;
        }

        p.mostrarVetor(vetor);
    }

    public void mostrarVetor(int[] vetor){
        for(int i : vetor){
            System.out.println(i);
        }
    }
}
