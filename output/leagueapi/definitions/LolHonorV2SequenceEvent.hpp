#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2SequenceEvent { /**/ 
    int32_t priority;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolHonorV2SequenceEvent& v) { 
    j["priority"] = v.priority;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolHonorV2SequenceEvent& v) { 
    v.priority = j.at("priority").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 