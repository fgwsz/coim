#pragma once
#include<string>
#include<vector>
#include<map>
namespace coim::dynamic{
template<typename Type_>
void copy(void* to,void const* from){
    *static_cast<Type_*>(to)=*static_cast<Type_ const*>(from);
}
struct Type{
    ::std::string name_;
    ::std::map<::std::string,TypeInfo*> field_;
    void(*copy_)(void*,void const*);
};
struct Object{
    ::std::string type_;
    ::std::map<::std::string,Object*> field_;
    void* data_;
};
template<typename Type_>
::std::string type_name(){
    return typeid(Type_).name();
}
struct Global final{//全放在一个类里面的原因是方便管理全局量的生命周期
    Global():types_({}),type_name_to_info_map({}){}
    Global(Global const&)=delete;
    Global& operator=(Global const&)=delete;
    ::std::vector<TypeInfo*> type_info_vec;//管理TypeInfo*的生命周期
    ::std::map<::std::string,TypeInfo*> type_name_to_info_map;
    ~Global(){
        for(auto ptr:this->type_info_vec){
            delete ptr;
        }
    }
    TypeInfo* type_name_to_info(::std::string const& name){
        if(this->type_name_to_info_map.count(name)!=0){
            return this->type_name_to_info_map[name];
        }else{
            return nullptr;
        }
    }
    template<typename Type_>
    Global& regist_type(){
        ::std::string name=::type_name<Type_>();
        if(this->type_name_to_info_map.count(name)==0){
            TypeInfo* info=new TypeInfo{};
            this->type_name_to_info_map[name]=info;
            info->name=name;
            info->field={};
            info->copy=::assignment_copy<Type_>;
            this->type_info_vec.push_back(info);
        }
        return *this;
    }
    template<typename Type_>
    Global& regist_field(::std::string const& type_name,::std::string const& field_name){
    }
}global;
Field get_field(Object&,char const*name);
void set(Object&,Object const&);
struct Object;
struct Field{
    char* name;
    struct Object* value;
};
struct Object{
    char* type;
    bool ownership;
    union{
        void* pointer;
        struct Field* field;
    };
};
}//namespace coim
