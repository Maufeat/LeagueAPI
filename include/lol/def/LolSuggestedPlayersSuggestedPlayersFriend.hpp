#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersFriend { 
    uint64_t id;
    std::string name;
    std::string availability; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersFriend& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["availability"] = v.availability; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersFriend& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.availability = j.at("availability").get<std::string>(); 
  }
}