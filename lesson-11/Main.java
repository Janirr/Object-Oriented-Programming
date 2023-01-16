public class Main {

    public static void main(String[] args) {
        String s1 = "Hello, world :)";
        String s2 = "World, goodbye :(";

        System.out.println(
                new Concatenation(
                        new Characters(s1),
                        new Substring(
                                new LowerCased(
                                        new Characters(s2)
                                ),
                                6, 9

                        )
                ).printedSeq()
        );
    }

}