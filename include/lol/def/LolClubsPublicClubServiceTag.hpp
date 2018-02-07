#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicClubServiceTag { 
    std::string name;
    std::string tag;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolClubsPublicClubServiceTag& v) {
    j["name"] = v.name; 
    j["tag"] = v.tag; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolClubsPublicClubServiceTag& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}