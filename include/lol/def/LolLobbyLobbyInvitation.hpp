#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace lol {
  struct LolLobbyLobbyInvitation { 
    std::string timestamp;
    LolLobbyEligibility eligibility;
    std::string id;
    uint64_t fromSummonerId;
    std::string toSummonerName;
    LolLobbyLobbyInvitationState state;
    json invitationMetaData;
    std::string fromSummonerName;
    std::string errorType;
    uint64_t toSummonerId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitation& v) {
    j["timestamp"] = v.timestamp; 
    j["eligibility"] = v.eligibility; 
    j["id"] = v.id; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["toSummonerName"] = v.toSummonerName; 
    j["state"] = v.state; 
    j["invitationMetaData"] = v.invitationMetaData; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["errorType"] = v.errorType; 
    j["toSummonerId"] = v.toSummonerId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitation& v) {
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility>(); 
    v.id = j.at("id").get<std::string>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.toSummonerName = j.at("toSummonerName").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
  }
}