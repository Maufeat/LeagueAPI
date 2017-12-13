#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPreEndOfGameSequenceEvent { 
    int32_t priority;
    std::string name; 
  };
  void to_json(json& j, const LolPreEndOfGameSequenceEvent& v) {
    j["priority"] = v.priority; 
    j["name"] = v.name; 
  }
  void from_json(const json& j, LolPreEndOfGameSequenceEvent& v) {
    v.priority = j.at("priority").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}