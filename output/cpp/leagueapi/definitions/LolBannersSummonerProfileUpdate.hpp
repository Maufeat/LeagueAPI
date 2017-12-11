#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolBannersSummonerProfileUpdate { /**/ 
    json value;/**/
    std::string key;/**/
  };
  static void to_json(json& j, const LolBannersSummonerProfileUpdate& v) { 
    j["value"] = v.value;
    j["key"] = v.key;
  }
  static void from_json(const json& j, LolBannersSummonerProfileUpdate& v) { 
    v.value = j.at("value").get<json>(); 
    v.key = j.at("key").get<std::string>(); 
  }
} 