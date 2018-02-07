#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer { 
    std::string platformId;
    uint64_t accountId;
    uint64_t summonerId;
    std::string summonerName;
    std::string currentPlatformId;
    uint64_t currentAccountId;
    std::string matchHistoryUri;
    int32_t profileIcon; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["currentPlatformId"] = v.currentPlatformId; 
    j["currentAccountId"] = v.currentAccountId; 
    j["matchHistoryUri"] = v.matchHistoryUri; 
    j["profileIcon"] = v.profileIcon; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>(); 
    v.profileIcon = j.at("profileIcon").get<int32_t>(); 
  }
}