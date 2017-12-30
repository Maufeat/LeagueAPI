#pragma once
#include "../base_def.hpp" 
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace lol {
  struct LolLobbyReceivedInvitationDto { 
    std::string timestamp;
    std::string invitationId;
    uint64_t fromSummonerId;
    bool canAcceptInvitation;
    LolLobbyLobbyInvitationState state;
    std::string fromSummonerName;
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    LolLobbyReceivedInvitationGameConfigDto gameConfig; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationDto& v) {
    j["timestamp"] = v.timestamp; 
    j["invitationId"] = v.invitationId; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["canAcceptInvitation"] = v.canAcceptInvitation; 
    j["state"] = v.state; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["restrictions"] = v.restrictions; 
    j["gameConfig"] = v.gameConfig; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationDto& v) {
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>(); 
  }
}