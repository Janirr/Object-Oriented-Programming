public class Logarithm implements Number {

    private final double base;
    private final double argument;

    @Override
    public void doubleValue() {
        try {
            if (argument <= 0 || argument == 1){
                throw new ArithmeticException(String.format("Argument should be >0 and !=1. Provided value: "+argument));
            }
            if (base <= 0){
                throw new ArithmeticException(String.format("Base should be > zero. Provided value: "+base));
            }
            System.out.println(Math.log(argument)/Math.log(base));
        } catch (Exception e) {
            throw new ArithmeticException("Error: "+e);
        }
    }
    public Logarithm(double inputBase, double inputArgument) {
        this.base = inputBase;
        this.argument = inputArgument;
    }
}