#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreItemLocalization { 
    std::string description;
    std::string language;
    std::string name; 
  };
  void to_json(json& j, const LolStoreItemLocalization& v) {
  j["description"] = v.description; 
  j["language"] = v.language; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolStoreItemLocalization& v) {
  v.description = j.at("description").get<std::string>(); 
  v.language = j.at("language").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}