#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer(){
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
    
    out << "Civil Engineer => Full name : " << operand.get_full_name()  // compiler error
        << ", age : " << operand.get_age()                              // because of private inheritance!
        << ", address : " << operand.get_address()
        << ", contract_count : " << operand.get_contract_count()
        << ", speciality : " << operand.m_speciality ;
    

    return out;
}

CivilEngineer::~CivilEngineer(){
}