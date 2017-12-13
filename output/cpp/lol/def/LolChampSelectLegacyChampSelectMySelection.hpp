#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyChampSelectMySelection { 
    std::optional<int64_t> wardSkinId;
    std::optional<uint64_t> spell1Id;
    std::optional<uint64_t> spell2Id;
    std::optional<int32_t> selectedSkinId; 
  };
  void to_json(json& j, const LolChampSelectLegacyChampSelectMySelection& v) {
  j["wardSkinId"] = v.wardSkinId; 
  j["spell1Id"] = v.spell1Id; 
  j["spell2Id"] = v.spell2Id; 
  j["selectedSkinId"] = v.selectedSkinId; 
  }
  void from_json(const json& j, LolChampSelectLegacyChampSelectMySelection& v) {
  v.wardSkinId = j.at("wardSkinId").get<std::optional<int64_t>>(); 
  v.spell1Id = j.at("spell1Id").get<std::optional<uint64_t>>(); 
  v.spell2Id = j.at("spell2Id").get<std::optional<uint64_t>>(); 
  v.selectedSkinId = j.at("selectedSkinId").get<std::optional<int32_t>>(); 
  }
}