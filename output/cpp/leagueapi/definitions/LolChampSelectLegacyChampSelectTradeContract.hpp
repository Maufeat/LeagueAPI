#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectTradeState.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyChampSelectTradeContract { /**/ 
    LolChampSelectLegacyChampSelectTradeState state;/**/
    int64_t cellId;/**/
    int64_t id;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyChampSelectTradeContract& v) { 
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChampSelectLegacyChampSelectTradeContract& v) { 
    v.state = j.at("state").get<LolChampSelectLegacyChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
} 