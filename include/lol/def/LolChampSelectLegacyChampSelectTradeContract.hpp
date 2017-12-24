#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyChampSelectTradeState.hpp"
namespace lol {
  struct LolChampSelectLegacyChampSelectTradeContract { 
    int64_t id;
    LolChampSelectLegacyChampSelectTradeState state;
    int64_t cellId; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectTradeContract& v) {
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectTradeContract& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.state = j.at("state").get<LolChampSelectLegacyChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
  }
}