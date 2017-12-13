#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPlayerDto.hpp>
namespace lol {
  struct LolLobbyPlayerCollectionDto { 
    std::vector<LolLobbyPlayerDto> players; 
  };
  void to_json(json& j, const LolLobbyPlayerCollectionDto& v) {
    j["players"] = v.players; 
  }
  void from_json(const json& j, LolLobbyPlayerCollectionDto& v) {
    v.players = j.at("players").get<std::vector<LolLobbyPlayerDto>>(); 
  }
}