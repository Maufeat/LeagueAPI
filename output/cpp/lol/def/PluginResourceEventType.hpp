#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PluginResourceEventType {  
    Create_e = 0,
    Delete_e = 2,
    Update_e = 1,
  };
  inline void to_json(json& j, const PluginResourceEventType& v) {
    if(v == PluginResourceEventType::Create_e) {
      j = "Create";
      return;
    }
    if(v == PluginResourceEventType::Delete_e) {
      j = "Delete";
      return;
    }
    if(v == PluginResourceEventType::Update_e) {
      j = "Update";
      return;
    }
  }
  inline void from_json(const json& j, PluginResourceEventType& v) {
    if(j.get<std::string>() == "Create") {
      v = PluginResourceEventType::Create_e;
      return;
    } 
    if(j.get<std::string>() == "Delete") {
      v = PluginResourceEventType::Delete_e;
      return;
    } 
    if(j.get<std::string>() == "Update") {
      v = PluginResourceEventType::Update_e;
      return;
    } 
  }
}