public interface Forecast {
    float actualTemperature(float temperature);
    final class Fake implements Forecast{
        @Override
        public float actualTemperature(float temperature){
            return temperature;
        }
    }

}
