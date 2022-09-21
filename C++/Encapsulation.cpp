#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


class Humans {
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
        cout <<"-------------------------- "<<count<<"----------------------------"<<endl;
        cout <<"Name: "<<name<<endl;        //simple function to display
        cout <<"Sex: "<<gender<<endl;
        cout <<"Job: "<<job<<endl;
    }
};
int main(){
    Humans h1("Messi","Football player","Male");     //Create an input for class.
    h1.BaseClassDisplay(1);
    Humans h2("7 chuon","IG model","Undefined");      //second input.
    h2.BaseClassDisplay(2);
    Humans h3("TrisTheConquor","motherfucking hcmuser","sometime Male, sometime female");
    h3.BaseClassDisplay(3);
    return 0;
}