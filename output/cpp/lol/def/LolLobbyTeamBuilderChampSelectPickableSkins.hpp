#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectPickableSkins { 
    std::vector<int32_t> skinIds; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampSelectPickableSkins& v) {
  j["skinIds"] = v.skinIds; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampSelectPickableSkins& v) {
  v.skinIds = j.at("skinIds").get<std::vector<int32_t>>(); 
  }
}