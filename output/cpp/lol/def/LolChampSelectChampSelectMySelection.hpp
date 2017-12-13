#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectChampSelectMySelection { 
    std::optional<int64_t> wardSkinId;
    std::optional<uint64_t> spell1Id;
    std::optional<int32_t> selectedSkinId;
    std::optional<uint64_t> spell2Id; 
  };
  void to_json(json& j, const LolChampSelectChampSelectMySelection& v) {
  j["wardSkinId"] = v.wardSkinId; 
  j["spell1Id"] = v.spell1Id; 
  j["selectedSkinId"] = v.selectedSkinId; 
  j["spell2Id"] = v.spell2Id; 
  }
  void from_json(const json& j, LolChampSelectChampSelectMySelection& v) {
  v.wardSkinId = j.at("wardSkinId").get<std::optional<int64_t>>(); 
  v.spell1Id = j.at("spell1Id").get<std::optional<uint64_t>>(); 
  v.selectedSkinId = j.at("selectedSkinId").get<std::optional<int32_t>>(); 
  v.spell2Id = j.at("spell2Id").get<std::optional<uint64_t>>(); 
  }
}