#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyPremadeRelationshipAnalytics { 
    std::string puuid;
    uint64_t summonerId;
    std::string platformId;
    std::string eventType;
    json eventData;
    uint64_t eventTimestamp;
    std::vector<std::string> premadePlayers;
    std::vector<std::string> friendPlayers; 
  };
  inline void to_json(json& j, const LolLobbyPremadeRelationshipAnalytics& v) {
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["platformId"] = v.platformId; 
    j["eventType"] = v.eventType; 
    j["eventData"] = v.eventData; 
    j["eventTimestamp"] = v.eventTimestamp; 
    j["premadePlayers"] = v.premadePlayers; 
    j["friendPlayers"] = v.friendPlayers; 
  }
  inline void from_json(const json& j, LolLobbyPremadeRelationshipAnalytics& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.eventType = j.at("eventType").get<std::string>(); 
    v.eventData = j.at("eventData").get<json>(); 
    v.eventTimestamp = j.at("eventTimestamp").get<uint64_t>(); 
    v.premadePlayers = j.at("premadePlayers").get<std::vector<std::string>>(); 
    v.friendPlayers = j.at("friendPlayers").get<std::vector<std::string>>(); 
  }
}