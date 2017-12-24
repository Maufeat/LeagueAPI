#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPremadeMemberDto.hpp"
namespace lol {
  struct LolLobbyPremadePartyDto { 
    std::string partyId;
    std::map<std::string, LolLobbyPremadeMemberDto> players; 
  };
  inline void to_json(json& j, const LolLobbyPremadePartyDto& v) {
    j["partyId"] = v.partyId; 
    j["players"] = v.players; 
  }
  inline void from_json(const json& j, LolLobbyPremadePartyDto& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.players = j.at("players").get<std::map<std::string, LolLobbyPremadeMemberDto>>(); 
  }
}