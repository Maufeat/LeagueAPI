#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatChatSummoner { /**/ 
    int32_t profileIconId;/**/
    uint64_t summonerId;/**/
    uint32_t summonerLevel;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const LolChatChatSummoner& v) { 
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LolChatChatSummoner& v) { 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 