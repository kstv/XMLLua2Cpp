#ifndef _CPPFILECREATE_H
#define _CPPFILECREATE_H

#include "Common.h"
#include "XmlOpeation.h"
#ifdef WIN32
#include <direct.h>
#else
#include <sys/stat.h> 
#endif
#include<iostream>
#include<fstream>
using namespace std;

#include "ParseCAPIFile.h"

void Tranfile(const char* pFileSrc, const char* pFileDes);
void Create_Lua_Environment(_Project_Lua_Info* pLuaProject);

bool Read_Cpp_File_XML(const char* pXMLName, _Project_Cpp_Info* pCppProject);
bool Read_Test_File_XML(const char* pXMLName, _Test_API* pTestAPI);
bool Read_StructData_File_XML(const char* pXMLName, _Base_Data_Group* pBaseDataGroup);

bool Create_Cpp_API_Files(_Project_Cpp_Info* pCppProject);
bool Create_Cpp_Exec_File(_Project_Cpp_Info* pCppProject);
bool Create_Cpp_Test_Files(_Project_Lua_Info* pLuaProject, _Project_Cpp_Info* pCppProject, _Test_API* pTestAPI);
bool Create_LuaCpp_Wrapper_Head_File(_Project_Lua_Info* pLuaProject, _Project_Cpp_Info* pCppProject);
bool Create_LuaCpp_Wrapper_Cpp_File(_Project_Lua_Info* pLuaProject, _Project_Cpp_Info* pCppProject);
bool Create_User_Data_Interface_Head_Files(_Base_Data_Group* pBaseDataGroup);
bool Create_User_Data_Interface_Cpp_Files(_Base_Data_Group* pBaseDataGroup);

bool CreateMakefile(_Project_Cpp_Info* pCppProject);

#endif
