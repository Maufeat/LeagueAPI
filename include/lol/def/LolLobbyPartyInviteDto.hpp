#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyInviteDto { 
    std::string state;
    LolLobbyGameModeDto gameMode;
    std::string partyId;
    std::string invitedByPuuid;
    int32_t partyVersion; 
  };
  inline void to_json(json& j, const LolLobbyPartyInviteDto& v) {
    j["state"] = v.state; 
    j["gameMode"] = v.gameMode; 
    j["partyId"] = v.partyId; 
    j["invitedByPuuid"] = v.invitedByPuuid; 
    j["partyVersion"] = v.partyVersion; 
  }
  inline void from_json(const json& j, LolLobbyPartyInviteDto& v) {
    v.state = j.at("state").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>(); 
    v.partyVersion = j.at("partyVersion").get<int32_t>(); 
  }
}