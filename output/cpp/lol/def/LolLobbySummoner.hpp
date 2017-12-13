#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbySummoner { 
    uint32_t summonerLevel;
    std::string displayName;
    std::string puuid;
    uint64_t summonerId;
    int32_t profileIconId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLobbySummoner& v) {
  j["summonerLevel"] = v.summonerLevel; 
  j["displayName"] = v.displayName; 
  j["puuid"] = v.puuid; 
  j["summonerId"] = v.summonerId; 
  j["profileIconId"] = v.profileIconId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLobbySummoner& v) {
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}