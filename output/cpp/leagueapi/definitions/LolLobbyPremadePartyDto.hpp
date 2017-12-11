#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyPremadeMemberDto.hpp>

namespace leagueapi {
  struct LolLobbyPremadePartyDto { /**/ 
    std::map<std::string, LolLobbyPremadeMemberDto> players;/**/
    std::string partyId;/**/
  };
  static void to_json(json& j, const LolLobbyPremadePartyDto& v) { 
    j["players"] = v.players;
    j["partyId"] = v.partyId;
  }
  static void from_json(const json& j, LolLobbyPremadePartyDto& v) { 
    v.players = j.at("players").get<std::map<std::string, LolLobbyPremadeMemberDto>>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
  }
} 