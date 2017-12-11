#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolItemSetsItemSetItem.hpp>"

namespace leagueapi {
  struct LolItemSetsItemSetBlock { /**/ 
    std::string type;/**/
    std::string showIfSummonerSpell;/**/
    std::vector<LolItemSetsItemSetItem> items;/**/
    std::string hideIfSummonerSpell;/**/
  };
  static void to_json(json& j, const LolItemSetsItemSetBlock& v) { 
    j["type"] = v.type;
    j["showIfSummonerSpell"] = v.showIfSummonerSpell;
    j["items"] = v.items;
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell;
  }
  static void from_json(const json& j, LolItemSetsItemSetBlock& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>(); 
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem>>(); 
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>(); 
  }
} 