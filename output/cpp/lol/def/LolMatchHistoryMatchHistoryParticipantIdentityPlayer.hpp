#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer { 
    std::string matchHistoryUri;
    uint64_t currentAccountId;
    std::string platformId;
    std::string summonerName;
    int32_t profileIcon;
    uint64_t summonerId;
    uint64_t accountId;
    std::string currentPlatformId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    j["matchHistoryUri"] = v.matchHistoryUri; 
    j["currentAccountId"] = v.currentAccountId; 
    j["platformId"] = v.platformId; 
    j["summonerName"] = v.summonerName; 
    j["profileIcon"] = v.profileIcon; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["currentPlatformId"] = v.currentPlatformId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.profileIcon = j.at("profileIcon").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
  }
}