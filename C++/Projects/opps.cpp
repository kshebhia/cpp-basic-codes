#include <iostream>
using namespace std;

class Student{
  private:
    string name;
    int id;
    double gpa;

    public:
      void setName(string n){
        name = n;
        }

      void setID(int i){
          id = i;
      }
      void setGPA(double g){
        if(g>0 && g<4){
        gpa = g;
        }
        else{
          cout<<"Invalid gpa entered";
        }
      }
      string getName(){
        return name;
      }
      int getID(){
        return id;
      }
      double getGPA(){
        return gpa;
      }

};


int main(){

  string n;
  int i;
  double g;

  cout<<"Enter name"<<endl;
  cin>>n;
  cout<<"Enter age"<<endl;
  cin>>i;
  cout<<"Enter gpa between 0 & 4"<<endl;
  cin>>g;

  Student newStudent;
  newStudent.setName(n);
  newStudent.setID(i);
  newStudent.setGPA(g);

  cout<<newStudent.getName()<<"'s student ID is "<<newStudent.getID()<<" & has a GPA of "<<newStudent.getGPA()<<".";


  cout<<"Thank you for using Student Information System"<<endl;
  return 0;
}
