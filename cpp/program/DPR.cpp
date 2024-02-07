// Import Library
#include <iostream>
#include <string>

// using name space
using namespace std;

//class declaration
class Depeer
{
    // private atribute
    private:
        string id;
        string name;
        string bidang;
        string partai;

    // public atribute
    public:
        /*constructor*/

        // constructor. take note that it doesn't have any return type
        Depeer(){
            //set name and gender to default values;
            this->id = "";
            this->name = "";
            this->bidang = "";
            this->partai = "";
        }

        Depeer(string id, string name, string bidang, string partai){
            this->id = id;
            this->name = name;
            this->bidang = bidang;
            this->partai = partai;
        }

        //get id
        string getId(){
            return this->id;
        }

        //set id
        void setId(string id){
            this->id = id;
        }

        //get name
        string getName(){
            return this->name;
        }

        //set name
        void setName(string name){
            this->name = name;
        }

        //get bidang
        string getBidang(){
            return this->bidang;
        }

        //set bidang
        void setBidang(string bidang){
            this->bidang = bidang;
        }

        //get partai
        string getPartai(){
            return this->partai;
        }

        //set partai
        void setPartai(string partai){
            this->partai = partai;
        }


        // Depeer Eats
        void eat(){
            cout << this->name << " is eating when the meeting started!" << endl;
        }

        // Depeer Sleep
        void sleep(){
            cout << this->name << " is sleeping in the toilet!" << endl;
        }

        // destructor
        ~Depeer(){
        }
};