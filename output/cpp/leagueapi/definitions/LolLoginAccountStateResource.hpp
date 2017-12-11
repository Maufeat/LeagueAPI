#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLoginAccountStateType.hpp>

namespace leagueapi {
  struct LolLoginAccountStateResource { /**/ 
    LolLoginAccountStateType state;/**/
  };
  static void to_json(json& j, const LolLoginAccountStateResource& v) { 
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolLoginAccountStateResource& v) { 
    v.state = j.at("state").get<LolLoginAccountStateType>(); 
  }
} 