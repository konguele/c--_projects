//Arreglo de Objetos
/* Se utiliza el Constructor por defecto porque no vas a inicializar los atributos directamente
cuando creas el arreglo. Si no pones ningún constructor, C++ te genera automáticamente el 
constructor por defecto*/


class Alumno{
    //Atributos
    private:
        float calMate, calProgra, promedio;
    
    //Métodos
    public:
        Alumno(float _calMate,float _calProgra){ //Si quieres crear un constructor para inicializar, no hay problema.
            calMate = _calMate;
            calProgra = _calProgra;
        }
        Alumno(){ //Constructor por defecto. Se puede añadir vacío o no añadirlo, no hay problema.

        }
        void pedirDatos();
        void mostrarNotas();
};