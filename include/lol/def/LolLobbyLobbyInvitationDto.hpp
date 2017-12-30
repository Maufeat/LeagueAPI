#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationState.hpp"
namespace lol {
  struct LolLobbyLobbyInvitationDto { 
    std::string timestamp;
    std::string invitationId;
    LolLobbyLobbyInvitationState state;
    uint64_t toSummonerId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitationDto& v) {
    j["timestamp"] = v.timestamp; 
    j["invitationId"] = v.invitationId; 
    j["state"] = v.state; 
    j["toSummonerId"] = v.toSummonerId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitationDto& v) {
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
  }
}