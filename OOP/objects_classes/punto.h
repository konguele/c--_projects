//Declaración de una clase. Es un fichero header

class punto{
    //Atributos
    private:
        int x,y;

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