#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct QueryResultDTO { 
    json queryToLootNames;
    int64_t lastUpdate; 
  };
  inline void to_json(json& j, const QueryResultDTO& v) {
    j["queryToLootNames"] = v.queryToLootNames; 
    j["lastUpdate"] = v.lastUpdate; 
  }
  inline void from_json(const json& j, QueryResultDTO& v) {
    v.queryToLootNames = j.at("queryToLootNames").get<json>(); 
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
  }
}