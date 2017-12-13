#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct Queue { 
    uint32_t minLevel;
    int32_t id; 
  };
  void to_json(json& j, const Queue& v) {
  j["minLevel"] = v.minLevel; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, Queue& v) {
  v.minLevel = j.at("minLevel").get<uint32_t>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}