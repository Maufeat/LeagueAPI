#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashPlayerData { /**/ 
    int32_t tickets;/**/
  };
  static void to_json(json& j, const LolClashPlayerData& v) { 
    j["tickets"] = v.tickets;
  }
  static void from_json(const json& j, LolClashPlayerData& v) { 
    v.tickets = j.at("tickets").get<int32_t>(); 
  }
} 