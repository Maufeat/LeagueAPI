#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2SequenceEvent { 
    std::string name;
    int32_t priority; 
  };
  inline void to_json(json& j, const LolHonorV2SequenceEvent& v) {
    j["name"] = v.name; 
    j["priority"] = v.priority; 
  }
  inline void from_json(const json& j, LolHonorV2SequenceEvent& v) {
    v.name = j.at("name").get<std::string>(); 
    v.priority = j.at("priority").get<int32_t>(); 
  }
}