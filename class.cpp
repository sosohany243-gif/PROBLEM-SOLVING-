       #include <iostream>
#include <string>
#include <vector>
using namespace std;
class circle {
    double radius = 1.0;
    string color = "red";
public:
    circle() {
        radius = 1.0;
        color =
    }
    circle (double r, string c) {
        radius = r;
        color = c;
    }
    circle (double r,) {
        radius = r;
        
    }
    double getRadius() {
        return radius;
    }
 string getColor() {
        return color;
    }
 void setRadius(double r) {
        radius = r;
    }
 void setColor(string c) {
     color = c;
 } 
 double get_area(){ 
     return 3.14 * radius * radius;
      
      
 } 

};




    int main() {

       
    } 


      

      
     



 
Q2

#include <iostream>
#include <string>

using namespace std;
class Employee {
    int id;
    string firstName;
    string lastName;
    int salary;

public:
    Employee(int id, string firstName, string lastName, int salary){
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
        

    }
    int  get_id() {
        return id;
    }
    string get_firstName() {
        return firstName;
    }
    string get_lasttName() {
        return lastName;
    }
    string Name(){
        return firstName + " " + lastName;
        
    }
    int salary() {
        return salary;
    }
    void set_salary(int salary) {
        this->salary = salary;
    }
    int get_annual_salary() {
        return salary;
    }
    int raise_salary(int percent) {
        return salary + (salary * percent / 100);

    }

    

       
    


};

  int main(){
      
     }

  Q3
#include <iostream>
#include <string>

using namespace std;
class Account {
    string id;
    string name;
    double balance;

public:
    Account (string id ,string name){
        this->id = id;
        this->name = name;
    }
    Account (string id ,string name,double balance){
        this->id = id;
        this->name = name;
        this->balance;
    }
    string get_ID() {
        return id;
    }
    string get_name() {
        return name;
    }
    double get_balance() {
        return balance;
    }
    double credit(double amount) {
        balance += amount;
        return balance;
    }
    double debit(double amount) {
        if (amount >= balance) {
            balance -= amount;
        }
        else {
            cout << "Amount exceeded balance" << endl;
        }
    }
   double & transfer_to( Account & Another  ,double amount ){
       if (amount >= balance) {
          balance -= amount;
          Another.balance += amount;
       }
       else {
           cout << "Amount exceeded balance" << endl;
       } 



  int main() {
      
     }

   
Q4
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Time {
    int hour;
    int minute;
    int second;
public:
    Time(int h, int min, int sec) {
        hour = h;
        minute = min;
        second = sec;
    }
   int  getHour() {
        return hour;
    }
   int  getMinute() {
        return minute;
    }
    int  getSecond() {
        return second;

    }
    void setHour(int h) {
        hour = h;
    }
    void setHour(int min) {
        minute = min;
    }
    void setHour(int sec ) {
        second = sec;
    }
    void setHour ( int h , int min,  int sec ) {
        hour = ;h
        minute = min;
        second = sec;
    }
    int nextSecond() {
        second++;
        if (second >= 60) {
            second = 0;
            minute++;
        } 
        else if (minute >= 60) {
            minute = 0;
            hour++;
        }
        int previoussecond() {
            second--;
            if (second < 0) {
                second = 59;
            }
            else if (minute < 0) {
                minute = 59;

            }
            else if (hour < 0) {
                hour = 23;
            }
        }  
        string showTime () {
            return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);

   };



    int main() {

       
    } 


      

      
     




