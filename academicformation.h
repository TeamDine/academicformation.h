///Cabecera de la clase academicformation.h
#ifndef ACADEMICFORMATION_H_INCLUDED
#define ACADEMICFORMATION_H_INCLUDED

/*** Cabeceras del sistema ***/
#include <string>
#include "name.h"
#include "date.h"

class Formation{
    private:
        std::string gradeName;     ///Nombre del Grado (Licenciatura, maestria, doctorado, especialidad)
        std::string institution;   ///Institucion de procedencia
        Date beginDate;            ///Fecha de inicio
        Date finishDate;           ///Fecha final
        Date degreeDate;           ///Fecha de obtenci�n de titulo
        std::string idCard;        ///numero de cedula profesional
    public:
        Formation();                 ///Constructor base
        ///Formation(const Formation&);   /// Constructor Copia
        Formation(const std::string&, std::string&, Date&, Date&, Date&, std::string& );  ///Constructor Parametrizado

        /*** getters ***/
        std::string getGradeName();
        std::string getInstitution();
        Date getBeginDate();
        Date getFinishDate();
        Date getDegreeDate();
        std::string getIdCard();

        /*** setters ***/
        void setGradeName(const std::string&);
        void setInstitution(const std::string&);
        void setBeginDate(const Date&);
        void setFinishDate(const Date&);
        void setDegreeDate(const Date&);
        void setIdCard(const std::string&);

        ///void toString();     ///Imprime direccion completa


};

#endif // ACADEMICFORMATION_H_INCLUDED
