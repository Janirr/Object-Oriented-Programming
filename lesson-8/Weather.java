public class Weather{
    private final Forecast forecast;
    private final float temperature;
    public Weather(Forecast fore, float temp){
        this.temperature=temp;
        this.forecast=fore;
    }
    public Weather actualTemperature(){
        return new Weather(this.forecast,this.temperature);
    }

    @Override
    public String toString(){
        return Float.toString(temperature);
    }
}
