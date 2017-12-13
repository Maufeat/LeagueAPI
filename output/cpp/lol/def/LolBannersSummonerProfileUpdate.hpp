#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersSummonerProfileUpdate { 
    json value;
    std::string key; 
  };
  void to_json(json& j, const LolBannersSummonerProfileUpdate& v) {
  j["value"] = v.value; 
  j["key"] = v.key; 
  }
  void from_json(const json& j, LolBannersSummonerProfileUpdate& v) {
  v.value = j.at("value").get<json>(); 
  v.key = j.at("key").get<std::string>(); 
  }
}