#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyChampSelectPickableChampions { 
    std::vector<int32_t> championIds; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectPickableChampions& v) {
    j["championIds"] = v.championIds; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectPickableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>(); 
  }
}