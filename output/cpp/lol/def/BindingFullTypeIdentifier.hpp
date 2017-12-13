#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingFullTypeIdentifier { 
    std::string type;
    std::string elementType; 
  };
  void to_json(json& j, const BindingFullTypeIdentifier& v) {
    j["type"] = v.type; 
    j["elementType"] = v.elementType; 
  }
  void from_json(const json& j, BindingFullTypeIdentifier& v) {
    v.type = j.at("type").get<std::string>(); 
    v.elementType = j.at("elementType").get<std::string>(); 
  }
}