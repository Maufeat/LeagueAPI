#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSummoner { /**/ 
    uint64_t summonerId;/**/
    uint32_t summonerLevel;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSummoner& v) { 
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSummoner& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 