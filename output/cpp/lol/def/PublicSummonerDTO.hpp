#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PublicSummonerDTO { 
    std::string previousSeasonHighestTier;
    uint32_t summonerLevel;
    std::string internalName;
    std::string puuid;
    std::string name;
    int32_t profileIconId;
    uint64_t acctId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const PublicSummonerDTO& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["summonerLevel"] = v.summonerLevel; 
    j["internalName"] = v.internalName; 
    j["puuid"] = v.puuid; 
    j["name"] = v.name; 
    j["profileIconId"] = v.profileIconId; 
    j["acctId"] = v.acctId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, PublicSummonerDTO& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}