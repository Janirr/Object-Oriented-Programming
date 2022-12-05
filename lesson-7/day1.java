import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Day1 {

    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(new File("day1.txt"));
            int s = 0;
            int max_s = 0;
            int elf_nr = 0;
            int elf_max = 0;
            while (scanner.hasNextLine()) {
                String x = scanner.nextLine();
                if (x.isEmpty()){
                    elf_nr += 1;
                    if (s > max_s) {
                        elf_max = elf_nr;
                        max_s=s;
                    }
                    s = 0;
                }
                else{
                    s+=Integer.parseInt(x);
                }
            }
            System.out.println("elf nr "+elf_max+" consumed "+max_s+" calories.");
            scanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
