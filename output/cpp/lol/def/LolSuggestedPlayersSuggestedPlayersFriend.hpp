#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersFriend { 
    std::string name;
    std::string availability;
    uint64_t id; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersFriend& v) {
    j["name"] = v.name; 
    j["availability"] = v.availability; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersFriend& v) {
    v.name = j.at("name").get<std::string>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}