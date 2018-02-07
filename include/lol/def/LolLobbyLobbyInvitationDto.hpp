#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationState.hpp"
namespace lol {
  struct LolLobbyLobbyInvitationDto { 
    std::string invitationId;
    uint64_t toSummonerId;
    LolLobbyLobbyInvitationState state;
    std::string timestamp;
    std::string toSummonerName; 
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitationDto& v) {
    j["invitationId"] = v.invitationId; 
    j["toSummonerId"] = v.toSummonerId; 
    j["state"] = v.state; 
    j["timestamp"] = v.timestamp; 
    j["toSummonerName"] = v.toSummonerName; 
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitationDto& v) {
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.toSummonerName = j.at("toSummonerName").get<std::string>(); 
  }
}