#include <iostream>
  using namespace std;
  int main (){
    /*suponiendo que el lugar 1 sea el número 0 en Fibonacci*/
    cout<<"¿Hasta qué lugar en la sucesión desea llegar?"<<endl;
      int n = 0, a=0, b=1, c;
      cin>>n;
        cout<<"La sucesión de Fibonacci hasta el lugar "<<n<<" es: "<<endl;
        if(n==1){cout<<"0 ";}
        else if(n>=2){cout<<"0 1 ";}
        n= n-2;
      for(int i = 1; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
      }
     
  }