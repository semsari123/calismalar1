
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
        cout<<"Name: ";
        getline(cin, name, '\n');
        cout<<endl;
        
        
        return name;
    }
    void SetOld(int old){
        
        this->old = old;
        
    }
    int GetOld(){
        cout<<"Old: ";
        cin>>old;
        cout<<endl;
       return old;
    }
    void SetTestimonial(int testimonial){
        
        this->testimonial=testimonial;
       
    }
    int GetTestimonial(){
        cout<<"Testimonial: ";
        cin>>testimonial;
        cout<<endl;
       return testimonial;
    }
    Soccerplayer(){};
    Soccerplayer(string name,int old,int testimonial){
        this->name=name;
        this->old=old;
        this->testimonial=testimonial;
         
        
    }
    void print(){
    cout<<"Name: "<<this -> name<<endl;
    cout<<"Old: "<<this -> old <<"years old  "<<endl;
    cout<<"Testimonial: "<<this -> testimonial<<"million dollars";
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
