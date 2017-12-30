#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicClubServiceTag { 
    std::string name;
    uint64_t summonerId;
    std::string tag; 
  };
  inline void to_json(json& j, const LolClubsPublicClubServiceTag& v) {
    j["name"] = v.name; 
    j["summonerId"] = v.summonerId; 
    j["tag"] = v.tag; 
  }
  inline void from_json(const json& j, LolClubsPublicClubServiceTag& v) {
    v.name = j.at("name").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.tag = j.at("tag").get<std::string>(); 
  }
}