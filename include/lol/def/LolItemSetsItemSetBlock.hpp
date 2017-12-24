#pragma once
#include "../base_def.hpp" 
#include "LolItemSetsItemSetItem.hpp"
namespace lol {
  struct LolItemSetsItemSetBlock { 
    std::string hideIfSummonerSpell;
    std::string type;
    std::string showIfSummonerSpell;
    std::vector<LolItemSetsItemSetItem> items; 
  };
  inline void to_json(json& j, const LolItemSetsItemSetBlock& v) {
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell; 
    j["type"] = v.type; 
    j["showIfSummonerSpell"] = v.showIfSummonerSpell; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolItemSetsItemSetBlock& v) {
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>(); 
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem>>(); 
  }
}