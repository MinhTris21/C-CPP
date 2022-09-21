#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;



using namespace std;



class Humans {  //Parent class or base class.
private:
    string name;
    string job;
    string gender;
public:
    Humans(string name, string job, string gender)
    {
        this -> name = name;
        this -> job = job;
        this -> gender = gender;
    }
    void setName(string name)       //alway remember to enter get and set function.
    {
        this -> name = name;
    }
    string getName()
    {
        return name;
    }
    void setGender( string gender)
    {
        this -> gender = gender;
    }
    string getGender()
    {
        return gender;
    }
    void setJob(string job)
    {
        this -> job = job;
    }
    string getJob()
    {
        return job;
    }
    void BaseClassDisplay(int count)
    {
        cout <<"-------------------------- "<<count<<" ----------------------------"<<endl;
        cout <<"Name: "<<name<<endl;        //simple function to display
        cout <<"Sex: "<<gender<<endl;
        cout <<"Job: "<<job<<endl;
    }
};



class Family : public Humans{  // Child class or derived class, creat from base stat in Base class.
private:
    int age;
    string address;   // stats that only usable for class Family or another child class inheritance from this class
    string favmeal;
public: 
    Family (string name, int age, string gender, string job, string address, string favmeal) : Humans(name, job, gender)
    {
        this -> age =age;
        this -> address =address;
        this -> favmeal = favmeal;
    }
    void setAge(int age)
    {
        this -> age = age;
    }
    int getAge()
    {
        return age;
    }
    void setAddress(string address)
    {
        this -> address = address;
    }
    string getAdress()
    {
        return address;
    }
    void setFavmeal(string favmeal)
    {
        this -> favmeal = favmeal;
    }
    string getFavmeal()
    {
        return favmeal;
    }
    void DerivedClassDisplay(int count){
        Humans :: BaseClassDisplay(count);  //overloading function from main class.
        cout <<"Age: "<<age<<endl;
        cout <<"Address: "<<address<<endl;
        cout <<"Favorite meal: "<<favmeal<<endl;
    }
};

int main(){
    // Creat input for each class, example
    cout <<"\n**********************REPRESENT FOR BASE CLASS***********************\n";
    Humans h1("Messi","Football player","Male");     
    Humans h2("7 chuon","IG model","Undefined");      
    Humans h3("TrisTheConquor","motherfucking US-ER","sometime Male, sometime female");
    h1.BaseClassDisplay(1);
    h2.BaseClassDisplay(2);
    h3.BaseClassDisplay(3);
    cout <<"**********************REPRESENT FOR DERIVED CLASS**********************"<<endl;
    Family fa("Thai",54,"Male","Farmer","245 Dong Son","Sweet taste");
    Family mo("Nhan",50,"Female","Everything, she do everything for me","245 Dong Son","Fish");
    Family bro("Biinh",26,"Male","96 lam IT","51/61 Go Vap","Pumpkin");             
    Family sis("Hai Yen",9,"Female","Student","245 Dong Son","Sweetheart, sweet taste");
    Family sel("TrisTheConquor",20,"Male","Dai co dong HCMUS","245 Dong Son","mi tom");
    fa.DerivedClassDisplay(1);
    mo.DerivedClassDisplay(2);
    bro.DerivedClassDisplay(3);
    sis.DerivedClassDisplay(4);
    sel.DerivedClassDisplay(5);
    return 0;
}