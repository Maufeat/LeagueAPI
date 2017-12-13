#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbySummoner { 
    uint64_t summonerId;
    std::string displayName;
    int32_t profileIconId;
    std::string puuid;
    uint32_t summonerLevel;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLobbySummoner& v) {
  j["summonerId"] = v.summonerId; 
  j["displayName"] = v.displayName; 
  j["profileIconId"] = v.profileIconId; 
  j["puuid"] = v.puuid; 
  j["summonerLevel"] = v.summonerLevel; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLobbySummoner& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}