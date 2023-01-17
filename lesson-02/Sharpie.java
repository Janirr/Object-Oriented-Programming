public class Sharpie {
String name;
float quality;
public Sharpie(String name, float quality){this.name=name; this.quality=quality;}
    public String getName(){return name;}
    public void setName(String newName){this.name = newName;}
    public float getQuality(){return quality;}
    public void setQuality(float newQuality){this.quality = newQuality;}
    public boolean isGood(){return quality > 8.0f;}
    public void addQuality(float bonusQuality){this.quality = bonusQuality+quality;}
    public void info(){
        System.out.println("Name: "+this.name);
        System.out.println("Quality: "+this.quality);
    }
}
