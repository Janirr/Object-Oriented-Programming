import java.util.ArrayList;

public class Shiritori {
    ArrayList<String> words = new ArrayList<String>();
    boolean game_over;
    public void play(String word){
        if (words.size() == 0){
            words.add(word);
        }
        else{
            String oldElement = words.get(words.size() - 1);
            char lastOldIndexElement = oldElement.charAt(oldElement.length()-1);
            if (word.charAt(0) != lastOldIndexElement){
                game_over = true;
                System.out.println(word+" does not start with an '"+lastOldIndexElement+"'.");
            } else if (words.contains(word)) {
                game_over = true;
                System.out.println(word+" has already been used");
            } else if (game_over) {
                System.out.println("Game over. You can not play anymore.");
            } else{
                words.add(word);
            }
        }
    }

    public void printWords(){
        System.out.println(words);
    }
    public void restart(){
        game_over = false;
        words = new ArrayList<String>();
    }
}
