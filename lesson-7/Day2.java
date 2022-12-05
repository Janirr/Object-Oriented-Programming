import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Day2 {

    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(new File("day2.txt"));

            while (scanner.hasNextLine()) {
                String strArr[]= scanner.nextLine().split(" ");
                String a = strArr[0];
                String b = strArr[1];
                Letters l1 = new Letters(a,b);
                l1.scoreForOutcome();
                l1.scoreForShape();
            }
            scanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}