#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashMatchmakingDodgeData.hpp>"

namespace leagueapi {
  struct LolClashMatchmakingSearchResource { /**/ 
    int32_t queueId;/**/
    LolClashMatchmakingDodgeData dodgeData;/**/
  };
  static void to_json(json& j, const LolClashMatchmakingSearchResource& v) { 
    j["queueId"] = v.queueId;
    j["dodgeData"] = v.dodgeData;
  }
  static void from_json(const json& j, LolClashMatchmakingSearchResource& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData>(); 
  }
} 