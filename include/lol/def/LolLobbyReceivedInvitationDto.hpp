#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
namespace lol {
  struct LolLobbyReceivedInvitationDto { 
    std::string invitationId;
    uint64_t fromSummonerId;
    LolLobbyLobbyInvitationState state;
    std::string timestamp;
    std::string fromSummonerName;
    bool canAcceptInvitation;
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    LolLobbyReceivedInvitationGameConfigDto gameConfig; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationDto& v) {
    j["invitationId"] = v.invitationId; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["state"] = v.state; 
    j["timestamp"] = v.timestamp; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["canAcceptInvitation"] = v.canAcceptInvitation; 
    j["restrictions"] = v.restrictions; 
    j["gameConfig"] = v.gameConfig; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationDto& v) {
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>(); 
  }
}