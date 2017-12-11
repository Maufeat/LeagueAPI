#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LootNameRefId { /**/ 
    std::string refId;/**/
    std::string lootName;/**/
  };
  static void to_json(json& j, const LootNameRefId& v) { 
    j["refId"] = v.refId;
    j["lootName"] = v.lootName;
  }
  static void from_json(const json& j, LootNameRefId& v) { 
    v.refId = j.at("refId").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
  }
} 