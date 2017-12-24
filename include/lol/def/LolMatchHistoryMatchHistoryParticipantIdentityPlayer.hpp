#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer { 
    uint64_t summonerId;
    std::string currentPlatformId;
    std::string platformId;
    uint64_t accountId;
    std::string summonerName;
    std::string matchHistoryUri;
    uint64_t currentAccountId;
    int32_t profileIcon; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["currentPlatformId"] = v.currentPlatformId; 
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
    j["summonerName"] = v.summonerName; 
    j["matchHistoryUri"] = v.matchHistoryUri; 
    j["currentAccountId"] = v.currentAccountId; 
    j["profileIcon"] = v.profileIcon; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.profileIcon = j.at("profileIcon").get<int32_t>(); 
  }
}