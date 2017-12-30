#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersFriend { 
    std::string name;
    uint64_t id;
    std::string availability; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersFriend& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["availability"] = v.availability; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersFriend& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
  }
}