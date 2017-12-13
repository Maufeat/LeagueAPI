#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicClubServiceTag { 
    std::string tag;
    std::string name;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClubsPublicClubServiceTag& v) {
  j["tag"] = v.tag; 
  j["name"] = v.name; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClubsPublicClubServiceTag& v) {
  v.tag = j.at("tag").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}