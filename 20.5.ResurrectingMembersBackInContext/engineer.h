#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"


// Engineer will do private inheritance
class Engineer : private Person{

    friend std::ostream& operator <<(std::ostream& , const Engineer& operand);

    public :
        Engineer(); 
        ~Engineer();

        void build_something(){
            m_full_name = "Aziz Sancar";    // OK
            m_age = 65;     // OK   
            //m_address = "Bulmazsa getir str"; // Compiler Error! Because it is private to base class
        }

        public :
            using Person::add;

    
        protected :     // public also works
            using Person::get_full_name;
            using Person::get_age;
            using Person::get_address;

            //using Person::m_address;  // you will take compiler error
                                        // if something is private in upstream class, you can not resurrect it.

        int get_contract_count() const{
            return contract_count;
        }
    
    private :
        int contract_count{0};
};

#endif // ENGINEER_H