#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolReplaysReplayContextData { /**/ 
    std::string componentType;/**/
  };
  static void to_json(json& j, const LolReplaysReplayContextData& v) { 
    j["componentType"] = v.componentType;
  }
  static void from_json(const json& j, LolReplaysReplayContextData& v) { 
    v.componentType = j.at("componentType").get<std::string>(); 
  }
} 