# lab7
 #include <iostream>
 using namespace std;
 class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char* ch,int a,int b,int c);
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };
   void ZooAnimal::Create(char* ch,int a,int b,int c)
   {name=ch;
   cageNumber=a;
   weightDate=b;
   weight=c;}
 void ZooAnimal::Destroy ()
   {	
    delete [] name;
   }

 
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
 int ZooAnimal::daysSinceLastWeighed (int today)
{   
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);

if (today < weightDate) 
        today += 360;
      return (today-weightDate);
   }
int main ()
   {char* name;
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
    name=bozo.reptName();
    //cout << "This animal's name is " << bozo.name << endl;
    cout<<"This animal has the name "<<name<<endl; 
    bozo.Destroy ();
    return 0;
   }
