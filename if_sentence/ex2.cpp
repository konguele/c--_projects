// Escribe un programa que lea 3 números y determine cuál es el mayor

#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;

    cout<<"Elige 3 números: ";
    cin>>n1>>n2>>n3;

    if((n1>=n2) && (n1>=n3)){
        cout<<"\nEl mayor es: "<<n1<<endl;
    
    }
    else if((n2>=n1) && (n2>=n3)){
        cout<<"\nEl mayor es: "<<n2<<endl;
    }
    else{
        cout<<"\nEl mayor es: "<<n3<<endl; 
    }

    return 0;
}