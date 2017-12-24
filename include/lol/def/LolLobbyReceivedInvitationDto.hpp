#pragma once
#include "../base_def.hpp" 
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace lol {
  struct LolLobbyReceivedInvitationDto { 
    LolLobbyReceivedInvitationGameConfigDto gameConfig;
    std::string fromSummonerName;
    uint64_t fromSummonerId;
    std::string timestamp;
    std::string invitationId;
    LolLobbyLobbyInvitationState state;
    bool canAcceptInvitation;
    std::vector<LolLobbyEligibilityRestriction> restrictions; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationDto& v) {
    j["gameConfig"] = v.gameConfig; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["timestamp"] = v.timestamp; 
    j["invitationId"] = v.invitationId; 
    j["state"] = v.state; 
    j["canAcceptInvitation"] = v.canAcceptInvitation; 
    j["restrictions"] = v.restrictions; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationDto& v) {
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
  }
}