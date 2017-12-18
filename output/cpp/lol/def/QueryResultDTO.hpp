#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct QueryResultDTO { 
    int64_t lastUpdate;
    json queryToLootNames; 
  };
  inline void to_json(json& j, const QueryResultDTO& v) {
    j["lastUpdate"] = v.lastUpdate; 
    j["queryToLootNames"] = v.queryToLootNames; 
  }
  inline void from_json(const json& j, QueryResultDTO& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
    v.queryToLootNames = j.at("queryToLootNames").get<json>(); 
  }
}