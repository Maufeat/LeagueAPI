#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectPickableSkins { /**/ 
    std::vector<int32_t> skinIds;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderChampSelectPickableSkins& v) { 
    j["skinIds"] = v.skinIds;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderChampSelectPickableSkins& v) { 
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>(); 
  }
} 