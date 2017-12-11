#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsMastery.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage { /**/ 
    bool current;/**/
    std::vector<LolCollectionsCollectionsMastery> masteries;/**/
    uint32_t id;/**/
    std::map<std::string, uint32_t> summary;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsMasteryPage& v) { 
    j["current"] = v.current;
    j["masteries"] = v.masteries;
    j["id"] = v.id;
    j["summary"] = v.summary;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolCollectionsCollectionsMasteryPage& v) { 
    v.current = j.at("current").get<bool>(); 
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 