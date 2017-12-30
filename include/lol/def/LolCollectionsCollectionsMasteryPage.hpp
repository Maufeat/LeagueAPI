#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsMastery.hpp"
namespace lol {
  struct LolCollectionsCollectionsMasteryPage { 
    std::string name;
    std::vector<LolCollectionsCollectionsMastery> masteries;
    uint32_t id;
    std::map<std::string, uint32_t> summary;
    bool current; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsMasteryPage& v) {
    j["name"] = v.name; 
    j["masteries"] = v.masteries; 
    j["id"] = v.id; 
    j["summary"] = v.summary; 
    j["current"] = v.current; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsMasteryPage& v) {
    v.name = j.at("name").get<std::string>(); 
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>(); 
    v.current = j.at("current").get<bool>(); 
  }
}