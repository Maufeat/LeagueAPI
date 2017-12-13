#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyQueueGameTypeConfig { 
    bool battleBoost;
    int32_t maxAllowableBans;
    bool allowTrades; 
  };
  void to_json(json& j, const LolChampSelectLegacyQueueGameTypeConfig& v) {
  j["battleBoost"] = v.battleBoost; 
  j["maxAllowableBans"] = v.maxAllowableBans; 
  j["allowTrades"] = v.allowTrades; 
  }
  void from_json(const json& j, LolChampSelectLegacyQueueGameTypeConfig& v) {
  v.battleBoost = j.at("battleBoost").get<bool>(); 
  v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>(); 
  v.allowTrades = j.at("allowTrades").get<bool>(); 
  }
}