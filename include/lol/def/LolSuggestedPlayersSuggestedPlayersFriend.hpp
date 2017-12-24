#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersFriend { 
    uint64_t id;
    std::string availability;
    std::string name; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersFriend& v) {
    j["id"] = v.id; 
    j["availability"] = v.availability; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersFriend& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}