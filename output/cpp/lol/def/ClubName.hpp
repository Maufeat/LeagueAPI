#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubName { 
    std::string name; 
  };
  void to_json(json& j, const ClubName& v) {
  j["name"] = v.name; 
  }
  void from_json(const json& j, ClubName& v) {
  v.name = j.at("name").get<std::string>(); 
  }
}