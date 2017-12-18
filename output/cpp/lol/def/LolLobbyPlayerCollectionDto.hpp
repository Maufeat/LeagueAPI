#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPlayerDto.hpp>
namespace lol {
  struct LolLobbyPlayerCollectionDto { 
    std::vector<LolLobbyPlayerDto> players; 
  };
  inline void to_json(json& j, const LolLobbyPlayerCollectionDto& v) {
    j["players"] = v.players; 
  }
  inline void from_json(const json& j, LolLobbyPlayerCollectionDto& v) {
    v.players = j.at("players").get<std::vector<LolLobbyPlayerDto>>(); 
  }
}