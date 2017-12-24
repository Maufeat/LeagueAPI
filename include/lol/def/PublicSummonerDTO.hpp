#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PublicSummonerDTO { 
    uint64_t summonerId;
    uint64_t acctId;
    std::string previousSeasonHighestTier;
    std::string name;
    int32_t profileIconId;
    uint32_t summonerLevel;
    std::string internalName;
    std::string puuid; 
  };
  inline void to_json(json& j, const PublicSummonerDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["acctId"] = v.acctId; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["name"] = v.name; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["internalName"] = v.internalName; 
    j["puuid"] = v.puuid; 
  }
  inline void from_json(const json& j, PublicSummonerDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
}