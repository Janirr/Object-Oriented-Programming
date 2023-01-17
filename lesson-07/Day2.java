import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Day2 {

    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(new File("Java/Day02.txt"));
            int sum = 0;
            while (scanner.hasNextLine()) {
                String s = scanner.nextLine();
                char a = s.charAt(0);
                char b = s.charAt(2);
                Letters l1 = new Letters(a,b);
                sum+=l1.scoreForOutcome(a,b);
                sum+=l1.scoreForShape(b);
            }
            System.out.println(sum);
            scanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
