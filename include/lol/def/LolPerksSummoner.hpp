#pragma once
#include "../base_def.hpp" 
#include "LolPerksSummonerRerollPoints.hpp"
namespace lol {
  struct LolPerksSummoner { 
    uint64_t summonerId;
    std::string lastSeasonHighestRank;
    std::string internalName;
    std::string displayName;
    uint32_t summonerLevel;
    std::string puuid;
    uint64_t accountId;
    uint64_t xpSinceLastLevel;
    uint64_t xpUntilNextLevel;
    int32_t profileIconId;
    uint32_t percentCompleteForNextLevel;
    LolPerksSummonerRerollPoints rerollPoints; 
  };
  inline void to_json(json& j, const LolPerksSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["internalName"] = v.internalName; 
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["xpSinceLastLevel"] = v.xpSinceLastLevel; 
    j["xpUntilNextLevel"] = v.xpUntilNextLevel; 
    j["profileIconId"] = v.profileIconId; 
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel; 
    j["rerollPoints"] = v.rerollPoints; 
  }
  inline void from_json(const json& j, LolPerksSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>(); 
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>(); 
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints>(); 
  }
}