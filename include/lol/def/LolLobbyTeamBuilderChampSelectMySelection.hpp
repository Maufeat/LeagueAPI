#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectMySelection { 
    std::optional<int64_t> wardSkinId;
    std::optional<uint64_t> spell1Id;
    std::optional<uint64_t> spell2Id;
    std::optional<int32_t> selectedSkinId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectMySelection& v) {
    if(v.wardSkinId)
      j["wardSkinId"] = *v.wardSkinId;
    if(v.spell1Id)
      j["spell1Id"] = *v.spell1Id;
    if(v.spell2Id)
      j["spell2Id"] = *v.spell2Id;
    if(v.selectedSkinId)
      j["selectedSkinId"] = *v.selectedSkinId;
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectMySelection& v) {
    if(auto it = j.find("wardSkinId"); it != j.end() && !it->is_null())
      v.wardSkinId = it->get<std::optional<int64_t>>(); 
    if(auto it = j.find("spell1Id"); it != j.end() && !it->is_null())
      v.spell1Id = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("spell2Id"); it != j.end() && !it->is_null())
      v.spell2Id = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("selectedSkinId"); it != j.end() && !it->is_null())
      v.selectedSkinId = it->get<std::optional<int32_t>>(); 
  }
}