#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyInvitationState.hpp>
namespace lol {
  struct LolLobbyLobbyInvitationDto { 
    std::string timestamp;
    LolLobbyLobbyInvitationState state;
    std::string invitationId;
    uint64_t toSummonerId; 
  };
  void to_json(json& j, const LolLobbyLobbyInvitationDto& v) {
  j["timestamp"] = v.timestamp; 
  j["state"] = v.state; 
  j["invitationId"] = v.invitationId; 
  j["toSummonerId"] = v.toSummonerId; 
  }
  void from_json(const json& j, LolLobbyLobbyInvitationDto& v) {
  v.timestamp = j.at("timestamp").get<std::string>(); 
  v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
  }
}