#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyChampSelectTradeState.hpp"
namespace lol {
  struct LolChampSelectLegacyChampSelectTradeContract { 
    int64_t id;
    int64_t cellId;
    LolChampSelectLegacyChampSelectTradeState state; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectTradeContract& v) {
    j["id"] = v.id; 
    j["cellId"] = v.cellId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectTradeContract& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.state = j.at("state").get<LolChampSelectLegacyChampSelectTradeState>(); 
  }
}