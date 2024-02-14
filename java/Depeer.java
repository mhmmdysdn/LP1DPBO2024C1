public class Depeer {

    // private attribute 
    private String id;
    private String name;
    private String bidang;
    private String partai;

    // public attribute
    /*constructor*/

    // constructor. take note that it doesn't have any return type
    public Depeer(){
        //set name and gender to default values
        this.id = "";
        this.name = "";
        this.bidang = ""; 
        this.partai = "";
    }

    public Depeer(String id, String name, String bidang, String partai){
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    //get id
    public String getId(){
        return this.id;
    }

    //set id
    public void setId(String id){
        this.id = id;
    }

    //get name
    public String getName(){
        return this.name;
    }

    //set name 
    public void setName(String name){
        this.name = name;
    }

    //get bidang
    public String getBidang(){
        return this.bidang;
    }

    //set bidang
    public void setBidang(String bidang){
        this.bidang = bidang;
    }

    //get partai
    public String getPartai(){
        return this.partai; 
    }

    //set partai
    public void setPartai(String partai){
        this.partai = partai;
    }


    // Depeer Eats
    public void eat(){
        System.out.println(this.name + " is eating when the meeting started!");
    }

    // Depeer Sleep
    public void sleep(){
        System.out.println(this.name + " is sleeping in the toilet!");
    }

    // destructor
    protected void finalize() { }

}