#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectChampSelectTradeState.hpp>"

namespace leagueapi {
  struct LolChampSelectChampSelectTradeContract { /**/ 
    LolChampSelectChampSelectTradeState state;/**/
    int64_t cellId;/**/
    int64_t id;/**/
  };
  static void to_json(json& j, const LolChampSelectChampSelectTradeContract& v) { 
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChampSelectChampSelectTradeContract& v) { 
    v.state = j.at("state").get<LolChampSelectChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
} 