#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsMastery.hpp"
namespace lol {
  struct LolCollectionsCollectionsMasteryPage { 
    bool current;
    uint32_t id;
    std::string name;
    std::map<std::string, uint32_t> summary;
    std::vector<LolCollectionsCollectionsMastery> masteries; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsMasteryPage& v) {
    j["current"] = v.current; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["summary"] = v.summary; 
    j["masteries"] = v.masteries; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsMasteryPage& v) {
    v.current = j.at("current").get<bool>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>(); 
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>(); 
  }
}