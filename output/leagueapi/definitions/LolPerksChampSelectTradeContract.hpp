#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPerksChampSelectTradeState.hpp>"

namespace leagueapi {
  struct LolPerksChampSelectTradeContract { /**/ 
    LolPerksChampSelectTradeState state;/**/
    int64_t cellId;/**/
    int64_t id;/**/
  };
  static void to_json(json& j, const LolPerksChampSelectTradeContract& v) { 
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolPerksChampSelectTradeContract& v) { 
    v.state = j.at("state").get<LolPerksChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
} 