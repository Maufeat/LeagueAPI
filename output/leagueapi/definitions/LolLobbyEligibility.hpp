#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyEligibilityRestriction.hpp>"

namespace leagueapi {
  struct LolLobbyEligibility { /**/ 
    int32_t queueId;/**/
    std::vector<LolLobbyEligibilityRestriction> restrictions;/**/
    bool eligible;/**/
  };
  static void to_json(json& j, const LolLobbyEligibility& v) { 
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
    j["eligible"] = v.eligible;
  }
  static void from_json(const json& j, LolLobbyEligibility& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
    v.eligible = j.at("eligible").get<bool>(); 
  }
} 