#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibility.hpp"
namespace lol {
  struct LolLobbyLobbyInvitation { 
    std::string id;
    uint64_t fromSummonerId;
    uint64_t toSummonerId;
    LolLobbyLobbyInvitationState state;
    std::string errorType;
    std::string timestamp;
    json invitationMetaData;
    LolLobbyEligibility eligibility;
    std::string fromSummonerName;
    std::string toSummonerName; 
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitation& v) {
    j["id"] = v.id; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["toSummonerId"] = v.toSummonerId; 
    j["state"] = v.state; 
    j["errorType"] = v.errorType; 
    j["timestamp"] = v.timestamp; 
    j["invitationMetaData"] = v.invitationMetaData; 
    j["eligibility"] = v.eligibility; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["toSummonerName"] = v.toSummonerName; 
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitation& v) {
    v.id = j.at("id").get<std::string>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.errorType = j.at("errorType").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.toSummonerName = j.at("toSummonerName").get<std::string>(); 
  }
}