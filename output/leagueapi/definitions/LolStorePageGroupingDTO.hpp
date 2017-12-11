#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolStoreItemKey.hpp>"

namespace leagueapi {
  struct LolStorePageGroupingDTO { /**/ 
    bool hidden;/**/
    std::vector<LolStoreItemKey> items;/**/
    bool grouped;/**/
  };
  static void to_json(json& j, const LolStorePageGroupingDTO& v) { 
    j["hidden"] = v.hidden;
    j["items"] = v.items;
    j["grouped"] = v.grouped;
  }
  static void from_json(const json& j, LolStorePageGroupingDTO& v) { 
    v.hidden = j.at("hidden").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolStoreItemKey>>(); 
    v.grouped = j.at("grouped").get<bool>(); 
  }
} 