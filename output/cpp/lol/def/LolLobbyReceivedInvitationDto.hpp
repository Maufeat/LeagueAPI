#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyInvitationState.hpp>
#include <lol/def/LolLobbyReceivedInvitationGameConfigDto.hpp>
#include <lol/def/LolLobbyEligibilityRestriction.hpp>
namespace lol {
  struct LolLobbyReceivedInvitationDto { 
    std::string timestamp;
    std::string invitationId;
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    std::string fromSummonerName;
    LolLobbyLobbyInvitationState state;
    uint64_t fromSummonerId;
    bool canAcceptInvitation;
    LolLobbyReceivedInvitationGameConfigDto gameConfig; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationDto& v) {
    j["timestamp"] = v.timestamp; 
    j["invitationId"] = v.invitationId; 
    j["restrictions"] = v.restrictions; 
    j["fromSummonerName"] = v.fromSummonerName; 
    j["state"] = v.state; 
    j["fromSummonerId"] = v.fromSummonerId; 
    j["canAcceptInvitation"] = v.canAcceptInvitation; 
    j["gameConfig"] = v.gameConfig; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationDto& v) {
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>(); 
  }
}