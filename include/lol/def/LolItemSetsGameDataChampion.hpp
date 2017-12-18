#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolItemSetsGameDataChampion { 
    std::string alias; 
  };
  inline void to_json(json& j, const LolItemSetsGameDataChampion& v) {
    j["alias"] = v.alias; 
  }
  inline void from_json(const json& j, LolItemSetsGameDataChampion& v) {
    v.alias = j.at("alias").get<std::string>(); 
  }
}