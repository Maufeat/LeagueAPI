#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreItemLocalization { 
    std::string name;
    std::string description;
    std::string language; 
  };
  inline void to_json(json& j, const LolStoreItemLocalization& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["language"] = v.language; 
  }
  inline void from_json(const json& j, LolStoreItemLocalization& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.language = j.at("language").get<std::string>(); 
  }
}