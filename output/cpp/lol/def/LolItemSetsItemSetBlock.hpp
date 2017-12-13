#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolItemSetsItemSetItem.hpp>
namespace lol {
  struct LolItemSetsItemSetBlock { 
    std::string type;
    std::string showIfSummonerSpell;
    std::vector<LolItemSetsItemSetItem> items;
    std::string hideIfSummonerSpell; 
  };
  void to_json(json& j, const LolItemSetsItemSetBlock& v) {
  j["type"] = v.type; 
  j["showIfSummonerSpell"] = v.showIfSummonerSpell; 
  j["items"] = v.items; 
  j["hideIfSummonerSpell"] = v.hideIfSummonerSpell; 
  }
  void from_json(const json& j, LolItemSetsItemSetBlock& v) {
  v.type = j.at("type").get<std::string>(); 
  v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>(); 
  v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem>>(); 
  v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>(); 
  }
}