#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyGameModeDto.hpp>"

namespace leagueapi {
  struct LolLobbyPartyInviteDto { /**/ 
    std::string partyId;/**/
    LolLobbyGameModeDto gameMode;/**/
    std::string invitedByPuuid;/**/
    int32_t partyVersion;/**/
    std::string state;/**/
  };
  static void to_json(json& j, const LolLobbyPartyInviteDto& v) { 
    j["partyId"] = v.partyId;
    j["gameMode"] = v.gameMode;
    j["invitedByPuuid"] = v.invitedByPuuid;
    j["partyVersion"] = v.partyVersion;
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolLobbyPartyInviteDto& v) { 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>(); 
    v.partyVersion = j.at("partyVersion").get<int32_t>(); 
    v.state = j.at("state").get<std::string>(); 
  }
} 