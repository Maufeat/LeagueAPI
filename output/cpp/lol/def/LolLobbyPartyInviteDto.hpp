#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyGameModeDto.hpp>
namespace lol {
  struct LolLobbyPartyInviteDto { 
    std::string state;
    int32_t partyVersion;
    LolLobbyGameModeDto gameMode;
    std::string invitedByPuuid;
    std::string partyId; 
  };
  void to_json(json& j, const LolLobbyPartyInviteDto& v) {
    j["state"] = v.state; 
    j["partyVersion"] = v.partyVersion; 
    j["gameMode"] = v.gameMode; 
    j["invitedByPuuid"] = v.invitedByPuuid; 
    j["partyId"] = v.partyId; 
  }
  void from_json(const json& j, LolLobbyPartyInviteDto& v) {
    v.state = j.at("state").get<std::string>(); 
    v.partyVersion = j.at("partyVersion").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
  }
}