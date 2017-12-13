#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyInvitationState.hpp>
namespace lol {
  struct LolLobbyLobbyInvitationDto { 
    LolLobbyLobbyInvitationState state;
    uint64_t toSummonerId;
    std::string invitationId;
    std::string timestamp; 
  };
  void to_json(json& j, const LolLobbyLobbyInvitationDto& v) {
    j["state"] = v.state; 
    j["toSummonerId"] = v.toSummonerId; 
    j["invitationId"] = v.invitationId; 
    j["timestamp"] = v.timestamp; 
  }
  void from_json(const json& j, LolLobbyLobbyInvitationDto& v) {
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
  }
}