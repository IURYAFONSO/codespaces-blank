    
    #include <iostream>
    #include <cmath>
    
    using namespace std;
    
    int main (){
        
        int a , b ,c ;
        double x1,x2,delta;
        
            cout << "digite o valor de a: ";
            cin >> a;
            
            cout << "digite o valor de b: ";
            cin >> b;
            
            cout << "digite o valor de c: ";
            cin >> c;
            
                delta = b*b -4*a*c;
               if(a != 0 ){
                x1 = (-b + sqrt(delta))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                   
               }
                cout << "o resultado das raizes são " << x1 << endl;
                cout << "o resultado das raizes são " << x2 << endl;
               if (delta > 0 ){
                    cout << "é raizes distintas ";
               }
               else if ( delta < 0 ){
                   
                    cout << "é raizes imaginarias";
               }
               else if (delta == 0 ) {
                   cout << " é raizes unicas";
               }
                
        return 0;
    }
    
    