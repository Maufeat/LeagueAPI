#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectPickableSkins { 
    std::vector<int32_t> skinIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectPickableSkins& v) {
    j["skinIds"] = v.skinIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectPickableSkins& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>(); 
  }
}