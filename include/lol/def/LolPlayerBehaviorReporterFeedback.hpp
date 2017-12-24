#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorReporterFeedback { 
    uint64_t id;
    std::string type; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorReporterFeedback& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorReporterFeedback& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}