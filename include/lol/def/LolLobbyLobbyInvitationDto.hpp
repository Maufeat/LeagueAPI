#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationState.hpp"
namespace lol {
  struct LolLobbyLobbyInvitationDto { 
    uint64_t toSummonerId;
    LolLobbyLobbyInvitationState state;
    std::string timestamp;
    std::string invitationId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitationDto& v) {
    j["toSummonerId"] = v.toSummonerId; 
    j["state"] = v.state; 
    j["timestamp"] = v.timestamp; 
    j["invitationId"] = v.invitationId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitationDto& v) {
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
  }
}