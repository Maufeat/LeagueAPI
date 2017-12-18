#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherHeaderEntry { 
    std::string key;
    std::string value; 
  };
  inline void to_json(json& j, const PatcherHeaderEntry& v) {
    j["key"] = v.key; 
    j["value"] = v.value; 
  }
  inline void from_json(const json& j, PatcherHeaderEntry& v) {
    v.key = j.at("key").get<std::string>(); 
    v.value = j.at("value").get<std::string>(); 
  }
}