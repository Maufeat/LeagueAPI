#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer { 
    int32_t profileIcon;
    std::string currentPlatformId;
    uint64_t summonerId;
    uint64_t accountId;
    std::string platformId;
    std::string summonerName;
    std::string matchHistoryUri;
    uint64_t currentAccountId; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
  j["profileIcon"] = v.profileIcon; 
  j["currentPlatformId"] = v.currentPlatformId; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  j["platformId"] = v.platformId; 
  j["summonerName"] = v.summonerName; 
  j["matchHistoryUri"] = v.matchHistoryUri; 
  j["currentAccountId"] = v.currentAccountId; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
  v.profileIcon = j.at("profileIcon").get<int32_t>(); 
  v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>(); 
  v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
  }
}