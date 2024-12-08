/*Write a C++ program to create two class DM and DB .
DM consist of meter and centimeter.
DB consist of feet and inch.
Create two objects of two different above classes
add them after suitable conversion and store in an object.*/
import java.util.Scanner;
class DB {
    private float feet, inch;
    public DB(float ft, float in) {
        feet = ft;
        inch = in;
    }
    float totalinch()
    {
        return feet*12+inch;
    }
    void display() {
        System.out.println("feet:: " + feet + "inch:: " + inch);
    }
}
class DM {
    private float meter, centimeter;

    public DM(float m, float cm) {
        meter = m;
        centimeter = cm;
    }
    public float totalcm()
    {
        return meter*100+centimeter;
    }
    public void display() {
        System.out.println("meter:: " + meter + " CM:: " + centimeter);
    }
}
public class oopsasjava {
    public static DM addobj(DM dm,DB db)
    {
        float newcm,newmeter,newtotalcmeter;
        newtotalcmeter=dm.totalcm() + db.totalinch()*2.54f;
        newmeter=(int)(newtotalcmeter/100);
        newcm=newtotalcmeter-newmeter*100;
        DM result=new DM(newmeter,newcm);
        return result;
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        float m,cm,ft,in;
        System.out.print("meter:: ");
        m=sc.nextFloat();
        System.out.print("Centimeter:: ");
        cm=sc.nextFloat();
        System.out.print("feet:: ");
        ft=sc.nextFloat();
        System.out.print("inch:: ");
        in=sc.nextFloat();
        DM obdm=new DM(m, cm);
        DB obdb=new DB(ft,in);
        DM result=addobj(obdm,obdb);
        result.display();
    }
}