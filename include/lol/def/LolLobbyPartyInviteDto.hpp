#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyInviteDto { 
    std::string partyId;
    int32_t partyVersion;
    std::string state;
    std::string invitedByPuuid;
    LolLobbyGameModeDto gameMode; 
  };
  inline void to_json(json& j, const LolLobbyPartyInviteDto& v) {
    j["partyId"] = v.partyId; 
    j["partyVersion"] = v.partyVersion; 
    j["state"] = v.state; 
    j["invitedByPuuid"] = v.invitedByPuuid; 
    j["gameMode"] = v.gameMode; 
  }
  inline void from_json(const json& j, LolLobbyPartyInviteDto& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.partyVersion = j.at("partyVersion").get<int32_t>(); 
    v.state = j.at("state").get<std::string>(); 
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
  }
}