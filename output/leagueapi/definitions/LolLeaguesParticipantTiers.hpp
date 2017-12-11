#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesAchievedTier.hpp>"

namespace leagueapi {
  struct LolLeaguesParticipantTiers { /**/ 
    uint64_t summonerId;/**/
    std::vector<LolLeaguesAchievedTier> achievedTiers;/**/
  };
  static void to_json(json& j, const LolLeaguesParticipantTiers& v) { 
    j["summonerId"] = v.summonerId;
    j["achievedTiers"] = v.achievedTiers;
  }
  static void from_json(const json& j, LolLeaguesParticipantTiers& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>(); 
  }
} 