public class Application {
    public static void main(String[] args) {
        Forecast forecast = new Forecast.Fake();
        Weather weather = new Weather(forecast, 24.74f);
        Weather temper = weather.actualTemperature();
        System.out.println(weather.actualTemperature());
        System.out.println(temper.toString());
        System.out.println(forecast.actualTemperature(24.74f));
        assert "24.74".equals(temper.toString());
    }
}
