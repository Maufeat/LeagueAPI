#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicClubServiceTag { 
    uint64_t summonerId;
    std::string tag;
    std::string name; 
  };
  inline void to_json(json& j, const LolClubsPublicClubServiceTag& v) {
    j["summonerId"] = v.summonerId; 
    j["tag"] = v.tag; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolClubsPublicClubServiceTag& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}