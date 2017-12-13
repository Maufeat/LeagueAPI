#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicClubServiceTag { 
    std::string tag;
    uint64_t summonerId;
    std::string name; 
  };
  void to_json(json& j, const LolClubsPublicClubServiceTag& v) {
  j["tag"] = v.tag; 
  j["summonerId"] = v.summonerId; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolClubsPublicClubServiceTag& v) {
  v.tag = j.at("tag").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}