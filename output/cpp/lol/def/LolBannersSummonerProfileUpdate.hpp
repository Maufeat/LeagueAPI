#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersSummonerProfileUpdate { 
    std::string key;
    json value; 
  };
  void to_json(json& j, const LolBannersSummonerProfileUpdate& v) {
    j["key"] = v.key; 
    j["value"] = v.value; 
  }
  void from_json(const json& j, LolBannersSummonerProfileUpdate& v) {
    v.key = j.at("key").get<std::string>(); 
    v.value = j.at("value").get<json>(); 
  }
}