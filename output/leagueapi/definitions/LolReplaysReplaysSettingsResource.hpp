#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolReplaysReplaysSettingsData.hpp>"

namespace leagueapi {
  struct LolReplaysReplaysSettingsResource { /**/ 
    LolReplaysReplaysSettingsData data;/**/
  };
  static void to_json(json& j, const LolReplaysReplaysSettingsResource& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolReplaysReplaysSettingsResource& v) { 
    v.data = j.at("data").get<LolReplaysReplaysSettingsData>(); 
  }
} 