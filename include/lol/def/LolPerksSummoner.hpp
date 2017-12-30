#pragma once
#include "../base_def.hpp" 
#include "LolPerksSummonerRerollPoints.hpp"
namespace lol {
  struct LolPerksSummoner { 
    uint64_t xpSinceLastLevel;
    std::string lastSeasonHighestRank;
    uint64_t accountId;
    uint64_t summonerId;
    std::string puuid;
    std::string internalName;
    uint32_t percentCompleteForNextLevel;
    LolPerksSummonerRerollPoints rerollPoints;
    uint64_t xpUntilNextLevel;
    std::string displayName;
    uint32_t summonerLevel;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolPerksSummoner& v) {
    j["xpSinceLastLevel"] = v.xpSinceLastLevel; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["puuid"] = v.puuid; 
    j["internalName"] = v.internalName; 
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel; 
    j["rerollPoints"] = v.rerollPoints; 
    j["xpUntilNextLevel"] = v.xpUntilNextLevel; 
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolPerksSummoner& v) {
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>(); 
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints>(); 
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}