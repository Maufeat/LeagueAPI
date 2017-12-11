#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct QueryResultDTO { /**/ 
    int64_t lastUpdate;/**/
    json queryToLootNames;/**/
  };
  static void to_json(json& j, const QueryResultDTO& v) { 
    j["lastUpdate"] = v.lastUpdate;
    j["queryToLootNames"] = v.queryToLootNames;
  }
  static void from_json(const json& j, QueryResultDTO& v) { 
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
    v.queryToLootNames = j.at("queryToLootNames").get<json>(); 
  }
} 