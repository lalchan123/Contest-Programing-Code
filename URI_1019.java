import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1019 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            
            int N = input.nextInt();
            int h = N / 3600;
            int m = (N % 3600) / 60;
            int s = (N % 3600) % 60;

            System.out.printf("%d:%d:%d\n",h, m, s);
        }
    }
}