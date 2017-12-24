#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace lol {
  struct LolLobbyLobbyInvitation { 
    uint64_t toSummonerId;
    uint64_t fromSummonerId;
    std::string timestamp;
    std::string toSummonerName;
    LolLobbyEligibility eligibility;
    std::string fromSummonerName;
    std::string id;
    LolLobbyLobbyInvitationState state;
    std::string errorType;
    json invitationMetaData; 
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitation& v) {
    j["toSummonerId"] = v.toSummonerId; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["timestamp"] = v.timestamp; 
    j["toSummonerName"] = v.toSummonerName; 
    j["eligibility"] = v.eligibility; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["errorType"] = v.errorType; 
    j["invitationMetaData"] = v.invitationMetaData; 
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitation& v) {
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.toSummonerName = j.at("toSummonerName").get<std::string>(); 
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
  }
}