#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherHeaderEntry { 
    std::string value;
    std::string key; 
  };
  void to_json(json& j, const PatcherHeaderEntry& v) {
  j["value"] = v.value; 
  j["key"] = v.key; 
  }
  void from_json(const json& j, PatcherHeaderEntry& v) {
  v.value = j.at("value").get<std::string>(); 
  v.key = j.at("key").get<std::string>(); 
  }
}