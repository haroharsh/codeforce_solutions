import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] used = new int[n + 1];
            int ans = 0;
            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                if (k - x >= 1 && k - x <= n && used[k - x] > 0) {
                    ans++;
                    used[k - x]--;
                } 
                else{
                    used[x]++;
                }
            }
            System.out.println(ans);
        }
    }
}