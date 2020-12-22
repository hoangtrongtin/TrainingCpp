#include "EmployeeData.h"

EmployeeData::EmployeeData(){
    _maxId = 0;
    _data.resize(0);
}
int EmployeeData::GetMaxID(){
    return _maxId;
}
int EmployeeData::PushBack(Employee e){
    if(_maxId<e.GetID()){
        _maxId = e.GetID();
    }
    _data.push_back(e);
    return _maxId;
}
//int EmployeeData::Get(int i){}
Employee* EmployeeData::GetPointer(int i){
    Employee *e = nullptr;
    if(i >=0 && i<_data.size())
    e = &_data[i];
    return e;
}
string EmployeeData::ToString()
{
    string s("");
    for(auto e:_data)
    {
        s += e.ToString();
        s += "\n";
    }
    return s;
}