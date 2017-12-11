#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyEligibilityRestriction.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitationState.hpp>
#include <leagueapi/definitions/LolLobbyReceivedInvitationGameConfigDto.hpp>

namespace leagueapi {
  struct LolLobbyReceivedInvitationDto { /**/ 
    std::string timestamp;/**/
    LolLobbyLobbyInvitationState state;/**/
    std::string invitationId;/**/
    LolLobbyReceivedInvitationGameConfigDto gameConfig;/**/
    bool canAcceptInvitation;/**/
    std::vector<LolLobbyEligibilityRestriction> restrictions;/**/
    std::string fromSummonerName;/**/
    uint64_t fromSummonerId;/**/
  };
  static void to_json(json& j, const LolLobbyReceivedInvitationDto& v) { 
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["invitationId"] = v.invitationId;
    j["gameConfig"] = v.gameConfig;
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["restrictions"] = v.restrictions;
    j["fromSummonerName"] = v.fromSummonerName;
    j["fromSummonerId"] = v.fromSummonerId;
  }
  static void from_json(const json& j, LolLobbyReceivedInvitationDto& v) { 
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