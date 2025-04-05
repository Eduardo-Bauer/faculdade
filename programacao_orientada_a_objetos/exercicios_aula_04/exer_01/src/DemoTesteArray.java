import java.util.Scanner;

public class DemoTesteArray {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("digite o tamanho do vetor:\n");
        TesteArray teste = new TesteArray(sc.nextInt());

        for(int i : teste.getArray()){
            System.out.println(i);
        }
    }
}
