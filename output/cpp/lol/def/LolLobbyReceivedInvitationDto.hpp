#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyReceivedInvitationGameConfigDto.hpp>
#include <lol/def/LolLobbyEligibilityRestriction.hpp>
#include <lol/def/LolLobbyLobbyInvitationState.hpp>
namespace lol {
  struct LolLobbyReceivedInvitationDto { 
    std::string timestamp;
    LolLobbyLobbyInvitationState state;
    std::string invitationId;
    LolLobbyReceivedInvitationGameConfigDto gameConfig;
    bool canAcceptInvitation;
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    std::string fromSummonerName;
    uint64_t fromSummonerId; 
  };
  void to_json(json& j, const LolLobbyReceivedInvitationDto& v) {
  j["timestamp"] = v.timestamp; 
  j["state"] = v.state; 
  j["invitationId"] = v.invitationId; 
  j["gameConfig"] = v.gameConfig; 
  j["canAcceptInvitation"] = v.canAcceptInvitation; 
  j["restrictions"] = v.restrictions; 
  j["fromSummonerName"] = v.fromSummonerName; 
  j["fromSummonerId"] = v.fromSummonerId; 
  }
  void from_json(const json& j, LolLobbyReceivedInvitationDto& v) {
  v.timestamp = j.at("timestamp").get<std::string>(); 
  v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>(); 
  v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>(); 
  v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
  v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
  v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
  }
}