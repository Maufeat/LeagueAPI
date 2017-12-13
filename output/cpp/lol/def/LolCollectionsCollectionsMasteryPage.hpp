#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsMastery.hpp>
namespace lol {
  struct LolCollectionsCollectionsMasteryPage { 
    std::vector<LolCollectionsCollectionsMastery> masteries;
    bool current;
    std::map<std::string, uint32_t> summary;
    std::string name;
    uint32_t id; 
  };
  void to_json(json& j, const LolCollectionsCollectionsMasteryPage& v) {
    j["masteries"] = v.masteries; 
    j["current"] = v.current; 
    j["summary"] = v.summary; 
    j["name"] = v.name; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolCollectionsCollectionsMasteryPage& v) {
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>(); 
    v.current = j.at("current").get<bool>(); 
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}