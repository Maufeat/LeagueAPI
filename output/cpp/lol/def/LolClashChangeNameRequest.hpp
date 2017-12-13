#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashChangeNameRequest { 
    std::string name; 
  };
  void to_json(json& j, const LolClashChangeNameRequest& v) {
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolClashChangeNameRequest& v) {
  v.name = j.at("name").get<std::string>(); 
  }
}