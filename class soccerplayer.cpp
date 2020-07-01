/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Soccerplayer{
  string name;
  int old;
  int testimonial;
    public:
    
    void SetName(string name){
        
        this->name=name;
        
    }
    string GetName(){
        cin>>name;
        return name;
    }
    void SetOld(int old){
        
        this->old = old;
        
    }
    int GetOld(){
        cin>>old;
       return old;
    }
    void SetTestimonial(int testimonial){
        
        this->testimonial=testimonial;
       
    }
    int GetTestimonial(){
        cin>>testimonial;
       return testimonial;
    }
    Soccerplayer(){};
    Soccerplayer(string name,int old,int testimonial){
        this->name=name;
        this->old=old;
        this->testimonial=testimonial;
         
        
    }
    void print(){
    cout<<this -> name<<" "<<this -> old <<"years old  "<<this -> testimonial<<"million dollars";
    }
};
int main()
{   string name;
    int old;
    int testimonial;
    Soccerplayer X(name,old,testimonial);
    X.GetName();
    X.GetOld();
    X.GetTestimonial();
    X.print();
    return 0;
}
