#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsMastery.hpp"
namespace lol {
  struct LolCollectionsCollectionsMasteryPage { 
    uint32_t id;
    std::vector<LolCollectionsCollectionsMastery> masteries;
    std::map<std::string, uint32_t> summary;
    bool current;
    std::string name; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsMasteryPage& v) {
    j["id"] = v.id; 
    j["masteries"] = v.masteries; 
    j["summary"] = v.summary; 
    j["current"] = v.current; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsMasteryPage& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>(); 
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>(); 
    v.current = j.at("current").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}