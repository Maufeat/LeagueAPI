#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyQueueGameTypeConfig { /**/ 
    bool battleBoost;/**/
    int32_t maxAllowableBans;/**/
    bool allowTrades;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyQueueGameTypeConfig& v) { 
    j["battleBoost"] = v.battleBoost;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["allowTrades"] = v.allowTrades;
  }
  static void from_json(const json& j, LolChampSelectLegacyQueueGameTypeConfig& v) { 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
  }
} 