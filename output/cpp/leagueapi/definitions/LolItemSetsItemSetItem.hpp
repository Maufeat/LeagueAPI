#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolItemSetsItemSetItem { /**/ 
    uint16_t count;/**/
    std::string id;/**/
  };
  static void to_json(json& j, const LolItemSetsItemSetItem& v) { 
    j["count"] = v.count;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolItemSetsItemSetItem& v) { 
    v.count = j.at("count").get<uint16_t>(); 
    v.id = j.at("id").get<std::string>(); 
  }
} 