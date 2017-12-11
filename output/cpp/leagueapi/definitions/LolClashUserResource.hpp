#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashUserResource { /**/ 
    std::map<std::string, std::string> lol;/**/
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LolClashUserResource& v) { 
    j["lol"] = v.lol;
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolClashUserResource& v) { 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 