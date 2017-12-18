#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersSummonerProfileUpdate { 
    std::string key;
    json value; 
  };
  inline void to_json(json& j, const LolBannersSummonerProfileUpdate& v) {
    j["key"] = v.key; 
    j["value"] = v.value; 
  }
  inline void from_json(const json& j, LolBannersSummonerProfileUpdate& v) {
    v.key = j.at("key").get<std::string>(); 
    v.value = j.at("value").get<json>(); 
  }
}