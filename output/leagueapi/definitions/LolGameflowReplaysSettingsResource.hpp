#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolGameflowReplaysSettingsData.hpp>"

namespace leagueapi {
  struct LolGameflowReplaysSettingsResource { /**/ 
    LolGameflowReplaysSettingsData data;/**/
  };
  static void to_json(json& j, const LolGameflowReplaysSettingsResource& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolGameflowReplaysSettingsResource& v) { 
    v.data = j.at("data").get<LolGameflowReplaysSettingsData>(); 
  }
} 