public class DemoTesteArray {
    public static void main(String[] args) {
        int[] array = new int[10];
        TesteArray teste = new TesteArray();

        teste.recebeArray(array);

        for(int i : array){
            System.out.println(i);
        }
    }
}
