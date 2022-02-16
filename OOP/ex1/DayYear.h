//Implementación de la clase DayYear

class DayYear{
    //Atributos
    private:
        int dia,mes;

    //Métodos
    public:
        DayYear(int _dia,int _mes){ //Constructor
            dia = _dia;
            mes = _mes;
        }

        bool igual(DayYear& d);
        void visualizar();
};