#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectChampSelectDisabledChampions { 
    std::vector<int32_t> championIds; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectDisabledChampions& v) {
    j["championIds"] = v.championIds; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectDisabledChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>(); 
  }
}