#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectDisabledChampions { 
    std::vector<int32_t> championIds; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampSelectDisabledChampions& v) {
  j["championIds"] = v.championIds; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampSelectDisabledChampions& v) {
  v.championIds = j.at("championIds").get<std::vector<int32_t>>(); 
  }
}