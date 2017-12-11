#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/Position.hpp>"

namespace leagueapi {
  struct LolClashSetPositionRequest { /**/ 
    Position position;/**/
  };
  static void to_json(json& j, const LolClashSetPositionRequest& v) { 
    j["position"] = v.position;
  }
  static void from_json(const json& j, LolClashSetPositionRequest& v) { 
    v.position = j.at("position").get<Position>(); 
  }
} 