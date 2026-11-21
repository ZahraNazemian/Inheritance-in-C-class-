//inheritance
#include<iostream>

class Students
{
   std:: string teacher;
protected:
    std::string name;
    int age;
    
public:
      Students (std:: string s, std:: string t, int n )
    {
        teacher = t;
        name = s;
        age = n;
    }
    void setteacher(std::string t)
    {
        teacher = t;
    }
    void showPerson() {
        std::cout<< "Name:" << name << std::endl;
        std::cout<< "Age:" << age << std::endl;
        std::cout<< "Teacher:" << teacher << std::endl;
    }
    
};

class Highschoolstudent:public Students
{
public:
    int rollnumber;
    Highschoolstudent(std:: string s, std:: string t, int n, int m):Students ( s,  t,  n )
    {
        rollnumber = m;
        
    }
    void showPersoninhigh()
    {
        showPerson();
        std::cout<< "Rollnumber:" << rollnumber << std::endl;
    }
    
};

class LastyearS:public Highschoolstudent
{
    
public:
    std::string goaluni;
    LastyearS (std:: string s, std:: string t,  std:: string g, int n, int m):Highschoolstudent( s, t, n, m)
    {
        goaluni = g;
    }
    void show ()
    {
        showPersoninhigh();
        std::cout<< " The goal university:" << goaluni << std::endl;
    }
};

int main ()
{
    LastyearS s1 ("sara","Faber", "Oxford",  22,  332891 );
//    s1.name = "sara";
//    s1.goaluni = "Oxford";
//    s1.rollnumber = 332891;
 //   s1.age = 22;
//    s1.setteacher("Faber");
   s1.show();
    return 0;
}
