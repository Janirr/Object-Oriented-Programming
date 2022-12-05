import java.util.Objects;

public class Letters {
    char a;
    char b;
    Letters(char a, char b){this.a=a;this.b=b;}
    int scoreForShape(char c){
        if (Objects.equals(c, 'x'))
            return 1;
        else if (Objects.equals(c, 'y'))
            return 2;
        else if (Objects.equals(c, 'z'))
            return 3;
        else{return 0;}
    }
    int scoreForOutcome(char a, char b){
        if (a == 'A'){
            if (b == 'X')
                return 3;
            if (b == 'Y')
                return 6;
            if (b == 'Z')
                return 0;
        }
        if (a == 'B'){
            if (b == 'X')
                return 0;
            if (b == 'Y')
                return 6;
            if (b == 'Z')
                return 3;
        }
        if (a == 'C'){
            if (b == 'X')
                return 6;
            if (b == 'Y')
                return 0;
            if (b == 'Z')
                return 3;
        }
        return 0;
    }
}
