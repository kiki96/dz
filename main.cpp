#include <windows.h>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;




void sumanpmax()
{
     cout<<"Kao zadnji broj upisite 0\n";
     int dz2,dzsuma;
     int n=3;
     int dzmax=1;
     
     for(int dz1=1;dz1<n;dz1++)
     {
     cin>>dz2;
     dzsuma=dzsuma+dz2;
     if(dz2>dzmax) dzmax=dz2;
     if(dz2!=0) n++;
     if(dz2==0) n=-1;
     }
     
     cout<<"Suma je : "<<dzsuma<<"\t Najveci broj je : "<<dzmax<<endl; 
     system("PAUSE");
}

void jednadbapravcakrozdrijetocke()
{
     double x1,y1,x2,y2,a,b,c;
     cout<<"Upisite Koordinatu X1 : ";
     cin>>x1;
     cout<<"Upisite Koordinatu X2 : ";
     cin>>x2;
     cout<<"Upisite Koordinatu Y1 : ";
     cin>>y1;
     cout<<"Upisite Koordinatu Y2 : ";
     cin>>y2;
     a=(y2-y1)/(x2-x1);
     b=((y2-y1)*(-x1))/(x2-x1);
     c=b+y1;
     cout<<"y="<<a<<"x + "<<c;
}
//linearni (16.10.2012)
void linearni1()
{
     int a;
     cout<<"Upisite stranicu kvadrata (a) : ";
     cin>>a;
     cout<<"Opseg je : "<<a+a+a+a<<"\nPovrsina je : "<<a*a<<endl;
     system("PAUSE");
}

void linearni2()
{
     int a,b,c,suma;
     int n = 3;
     cout<<"Upisite 3 broja : ";
     cin>>a>>b>>c;
     suma=a+b+c;
     cout<<"\nAritmeticka sredina ucitanih brojeva je : "<<suma/n<<endl;
     system("PAUSE");
}

void linearni3()
{
     double a,b,c;
     cout<<"Upisite stranicu a : ";
     cin>>a;
     cout<<"Upisite stranicu b : ";
     cin>>b;
     cout<<"Upisite stranicu c : ";
     cin>>c;
     cout<<"Opseg trokuta je : "<<a+b+c<<endl;
     system("PAUSE");
}

void linearni4()
{
     double tecaj,eu;
     cout<<"Upisite tecaj eura : ";
     cin>>tecaj;
     cout<<"Upsite svotu koju zelite pretvoriti : ";
     cin>>eu;
     cout<<"Za vas iznos ("<<eu<<" Eura) dobit cete "<<eu*tecaj<<" Kuna"<<endl;
     system("PAUSE");
}

void linearni5()
{
     int a,b;
     cout<<"Upisite broj : ";
     cin>>a;
     cout<<a<<"/3="<<a/3<<" Ostatak : "<<a%3<<endl;
     system("PAUSE");
}

void linearni6()
{
     int a;
     cout<<"Upisite broj : ";
     cin>>a;
     cout<<a%2<<endl;
     system("PAUSE");
}

void linearni7()
{
     char c;
     int b;
     cout<<"Unesi neki znak:"<<endl;
     cin>>c;
     b=int(c);
     cout<<"ASCII kod znaka("<<c<<") je " <<b<<endl;

     system("PAUSE");
}

void linearni8()
{
     double a;
     cout<<"Upisite REALNI broj : ";
     cin>>a;
     a=abs(a);
     cout<<"Korijen broja |"<<a<<"| = "<<pow(a,1/2.0)<<endl;
     system("PAUSE");
}

void strucni1()
{   
     double a,l,S,p,R,G;
     cout<<"1-Bakar\n";
     cout<<"2-Srebro\n";
     cout<<"3-Aluminij\n";
     cout<<"Odaberite materijal :";
     cin>>a;
     if(a==1)
     p=0.0175;
     if(a==2)
     p=0.0159;
     if(a==3)
     p=0.028;
     cout<<"Upisite duljinu zice : ";
     cin>>l;
     cout<<"Upisite presjek zice : ";
     cin>>S;
     R=p*(l/S);
     G=1/R;
     cout<<"\nOtpor zice je : "<<R<<"\nVodljivost zice je : "<<G<<endl;    
     system("PAUSE");
}

void strucni2()
{
     int a;
     cout<<"1-Jako elektricnog polja\n";
     cout<<"2-Energija kondenzatora\n";
     cout<<"Odaberite : ";
     cin>>a;
     if(a==1)
     {
        system("CLS");
        double F,Q;
        cout<<"Upišite F : ";
        cin>>F;
        cout<<"Upisite Q : ";  
        cin>>Q;
        cout<<"Jakost el polja je "<<F/Q<<endl; 
     }
     if(a==2)
     {
        double U,Q; 
        cout<<"Upisite U : ";
        cin>>U;
        cout<<"Upisite Q : ";
        cin>>Q;
        cout<<"Energija kondenzatora je "<<(U*Q)/2<<endl;       
     }
     system("PAUSE");
}

void mat1()
{
     system("CLS");
     double f,L,xl;
     cout<<"Upisi L:";
     cin>>L;
     do 
        {
         cout<<"\nUpisite f : ";
         cin>>f;
         xl=2*M_PI*f*L;
         cout<<"Xl= "<<xl<<endl;
        }
      while (f != 0);
    
}

void mat2()
{
     system("CLS");
     double f,C,xc;
     cout<<"Upisi C:";
     cin>>C;
     do 
        {
          cout<<"\nUpisite f : ";
          cin>>f;
          xc=1/(2*M_PI*f*C);
          cout<<"Xc= "<<xc<<endl;
        }
     while (f != 0);
    
}
