#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPlayerBehaviorReporterFeedback { /**/ 
    std::string type;/**/
    uint64_t id;/**/
  };
  static void to_json(json& j, const LolPlayerBehaviorReporterFeedback& v) { 
    j["type"] = v.type;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolPlayerBehaviorReporterFeedback& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
} 