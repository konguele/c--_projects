//Backtracking - Algoritmo del Problema del salto del caballo

#include<iostream>
using namespace std;

const int N = 5;
int tablero[N][N];

//Desplazamientos relativos del caballo
int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

void escribirTablero(){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cout<<tablero[i][j]<<"|";
        }
        cout<<endl;
    }

    cout<<endl;
}

void saltoCaballo(int i,int x,int y,bool &exito){
    int nx,ny;
    int k=0; //Controla los desplazamientos del caballo
    exito = false;

    do{
        k++;
        nx = x + d[k-1][0];
        ny = y + d[k-1][1];

        //Verificando si las coordenadas son correctas
        if((nx>=0) && (nx<N) && (ny>=0) && (ny<N) && (tablero[nx][ny]==0)){
            //Guardamos el movimiento
            tablero[nx][ny] = i;
            escribirTablero(); //Mostramos como el caballo se va moviendo

            if(i < N*N){
                saltoCaballo(i+1,nx,ny,exito);

                if( !exito ){
                    tablero[nx][ny] = 0;
                }
            }
            else{
                exito = true;
            }
        }

    }while((k<8) && !exito);
}

int main(){
    bool exito;
    int fila=2;
    int col=2;

    tablero[fila][col] = 1;
    saltoCaballo(2,fila,col,exito);

    if(exito){ //Si éxito es verdadero
        cout<<"Camino encontrado"<<endl;
        escribirTablero();
    }
    else{
        cout<<"Camino NO encontrado :("<<endl;
    }


    return 0;
}