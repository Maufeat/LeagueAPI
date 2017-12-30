#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer { 
    std::string summonerName;
    int32_t profileIcon;
    uint64_t accountId;
    uint64_t summonerId;
    std::string platformId;
    std::string currentPlatformId;
    std::string matchHistoryUri;
    uint64_t currentAccountId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    j["summonerName"] = v.summonerName; 
    j["profileIcon"] = v.profileIcon; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["platformId"] = v.platformId; 
    j["currentPlatformId"] = v.currentPlatformId; 
    j["matchHistoryUri"] = v.matchHistoryUri; 
    j["currentAccountId"] = v.currentAccountId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.profileIcon = j.at("profileIcon").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
  }
}