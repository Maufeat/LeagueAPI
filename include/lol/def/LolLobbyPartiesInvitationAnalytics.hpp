#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartiesInvitationPlayerAnalytics.hpp"
namespace lol {
  struct LolLobbyPartiesInvitationAnalytics { 
    std::string partyId;
    std::string platformId;
    std::string eventType;
    json eventData;
    uint64_t eventTimestamp;
    std::vector<LolLobbyPartiesInvitationPlayerAnalytics> players; 
  };
  inline void to_json(json& j, const LolLobbyPartiesInvitationAnalytics& v) {
    j["partyId"] = v.partyId; 
    j["platformId"] = v.platformId; 
    j["eventType"] = v.eventType; 
    j["eventData"] = v.eventData; 
    j["eventTimestamp"] = v.eventTimestamp; 
    j["players"] = v.players; 
  }
  inline void from_json(const json& j, LolLobbyPartiesInvitationAnalytics& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.eventType = j.at("eventType").get<std::string>(); 
    v.eventData = j.at("eventData").get<json>(); 
    v.eventTimestamp = j.at("eventTimestamp").get<uint64_t>(); 
    v.players = j.at("players").get<std::vector<LolLobbyPartiesInvitationPlayerAnalytics>>(); 
  }
}