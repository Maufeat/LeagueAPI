#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectPickableChampions { 
    std::vector<int32_t> championIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectPickableChampions& v) {
    j["championIds"] = v.championIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectPickableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>(); 
  }
}