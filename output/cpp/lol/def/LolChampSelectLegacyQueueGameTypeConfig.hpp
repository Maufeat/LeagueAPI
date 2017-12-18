#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyQueueGameTypeConfig { 
    bool battleBoost;
    bool allowTrades;
    int32_t maxAllowableBans; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyQueueGameTypeConfig& v) {
    j["battleBoost"] = v.battleBoost; 
    j["allowTrades"] = v.allowTrades; 
    j["maxAllowableBans"] = v.maxAllowableBans; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyQueueGameTypeConfig& v) {
    v.battleBoost = j.at("battleBoost").get<bool>(); 
    v.allowTrades = j.at("allowTrades").get<bool>(); 
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
  }
}