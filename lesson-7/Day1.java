import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Day1 {

    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(new File("day1.txt"));
            int kcal = 0,max_kcal = 0,elf_nr = 0,elf_max = 0;
            while (scanner.hasNextLine()) {
                String x = scanner.nextLine();
                if (x.isEmpty()){
                    elf_nr += 1;
                    Comparison c1 = new Comparison(kcal,max_kcal);
                    if (c1.isBigger()){elf_max = elf_nr; max_kcal=kcal; }
                    kcal = 0;
                }
                else{
                    kcal+=Integer.parseInt(x);
                }
            }
            System.out.println("elf nr "+elf_max+" consumed "+max_kcal+" calories.");
            scanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}