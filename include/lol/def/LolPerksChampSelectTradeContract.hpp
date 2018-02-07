#pragma once
#include "../base_def.hpp" 
#include "LolPerksChampSelectTradeState.hpp"
namespace lol {
  struct LolPerksChampSelectTradeContract { 
    int64_t id;
    int64_t cellId;
    LolPerksChampSelectTradeState state; 
  };
  inline void to_json(json& j, const LolPerksChampSelectTradeContract& v) {
    j["id"] = v.id; 
    j["cellId"] = v.cellId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolPerksChampSelectTradeContract& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.state = j.at("state").get<LolPerksChampSelectTradeState>(); 
  }
}