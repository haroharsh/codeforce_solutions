import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            boolean found = false;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int x = arr[i];
                    int y = arr[j];
                    if ((y % x) % 2 == 0) {
                        System.out.println(x + " " + y);
                        found = true;
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
            if (!found) {
                System.out.println(-1);
            }
        }
    }
}