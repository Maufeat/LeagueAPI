#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyInviteDto { 
    int32_t partyVersion;
    std::string partyId;
    LolLobbyGameModeDto gameMode;
    std::string invitedByPuuid;
    std::string state; 
  };
  inline void to_json(json& j, const LolLobbyPartyInviteDto& v) {
    j["partyVersion"] = v.partyVersion; 
    j["partyId"] = v.partyId; 
    j["gameMode"] = v.gameMode; 
    j["invitedByPuuid"] = v.invitedByPuuid; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyPartyInviteDto& v) {
    v.partyVersion = j.at("partyVersion").get<int32_t>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
  }
}