#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClubsPublicSessionResource { /**/ 
    uint32_t sessionExpire;/**/
    std::string sessionState;/**/
  };
  static void to_json(json& j, const LolClubsPublicSessionResource& v) { 
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }
  static void from_json(const json& j, LolClubsPublicSessionResource& v) { 
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
    v.sessionState = j.at("sessionState").get<std::string>(); 
  }
} 