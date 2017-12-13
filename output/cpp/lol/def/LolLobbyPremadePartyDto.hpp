#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPremadeMemberDto.hpp>
namespace lol {
  struct LolLobbyPremadePartyDto { 
    std::map<std::string, LolLobbyPremadeMemberDto> players;
    std::string partyId; 
  };
  void to_json(json& j, const LolLobbyPremadePartyDto& v) {
    j["players"] = v.players; 
    j["partyId"] = v.partyId; 
  }
  void from_json(const json& j, LolLobbyPremadePartyDto& v) {
    v.players = j.at("players").get<std::map<std::string, LolLobbyPremadeMemberDto>>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
  }
}