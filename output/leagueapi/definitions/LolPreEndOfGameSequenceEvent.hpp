#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPreEndOfGameSequenceEvent { /**/ 
    int32_t priority;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolPreEndOfGameSequenceEvent& v) { 
    j["priority"] = v.priority;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolPreEndOfGameSequenceEvent& v) { 
    v.priority = j.at("priority").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 