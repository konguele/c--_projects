//Declaración de una clase. Es un fichero header

class punto{
    //Atributos
    public: //Cuando está público podemos manejar estos valores a nuestro antojo
        int x,y;
    //private: Es la clase privada, sólo los miembros de la clase pueden acceder
    //protected: Puede ser accedido por miembros de la misma clase o clases hijas

    //Métodos
    public:
        punto(int _x,int _y){ //Método constructor
            x = _x;
            y = _y;
        }

        punto(){ //Método constructor. Se diferencia porque tiene el mismo nombre de la clase
            x = y = 0;
        }

        void setX(int valorX); //Establecemos el valor de X
        void setY(int valorY); //Establecemos el valor de Y
        int getX(); //Obtener el valor de X
        int getY(); //Obtener el valor de Y
};