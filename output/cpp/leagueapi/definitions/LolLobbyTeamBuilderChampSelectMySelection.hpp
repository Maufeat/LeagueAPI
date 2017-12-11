#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectMySelection { /**/ 
    std::optional<int64_t> wardSkinId;/**/
    std::optional<uint64_t> spell1Id;/**/
    std::optional<int32_t> selectedSkinId;/**/
    std::optional<uint64_t> spell2Id;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderChampSelectMySelection& v) { 
    j["wardSkinId"] = v.wardSkinId;
    j["spell1Id"] = v.spell1Id;
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell2Id"] = v.spell2Id;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderChampSelectMySelection& v) { 
    v.wardSkinId = j.at("wardSkinId").get<std::optional<int64_t>>(); 
    v.spell1Id = j.at("spell1Id").get<std::optional<uint64_t>>(); 
    v.selectedSkinId = j.at("selectedSkinId").get<std::optional<int32_t>>(); 
    v.spell2Id = j.at("spell2Id").get<std::optional<uint64_t>>(); 
  }
} 