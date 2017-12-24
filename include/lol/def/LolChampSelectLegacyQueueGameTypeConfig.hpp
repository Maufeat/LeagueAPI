#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyQueueGameTypeConfig { 
    int32_t maxAllowableBans;
    bool allowTrades;
    bool battleBoost; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyQueueGameTypeConfig& v) {
    j["maxAllowableBans"] = v.maxAllowableBans; 
    j["allowTrades"] = v.allowTrades; 
    j["battleBoost"] = v.battleBoost; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyQueueGameTypeConfig& v) {
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.battleBoost = j.at("battleBoost").get<bool>(); 
  }
}